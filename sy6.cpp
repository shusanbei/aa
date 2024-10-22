#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define STACK_CHAR_SIZE 100 //栈的初始大小
#define STACK_INC 10   //能扩增的栈的大小
#define N 100
 
typedef struct //定义栈的结构体
{
	char* base;
	char* top;
	int stacksize;
} SqStack;
 
typedef struct {
	char formula[200];//产生式
}grammarElement;
 
grammarElement gramOldSet[200];//原始文法的产生式集
 
char terSymbol[N];      //终结符
char nterSymbol[N];        //非终结符
char allSymbol[400];      //所有符号
char firstVT[N][N];  //各非终结符的FirstVT集合
char lastVT[N][N]; //各非终结符的LastVT集合
char table[N][N];          //优先关系表
 
int lenGramStr = 0;    //产生式的句数
int lenTerStr = 0;     //终结符数组的长度
int lenNTerStr = 0; //非终结符数组的长度
int flagFirstVT = 1;  //作为FirstVT集合不再扩大的标志
int flagLastVT = 1; //作为LastVT集合不再扩大的标志
 
void InitStack(SqStack* S)//初始化
{
	S->base = (char*)malloc(STACK_CHAR_SIZE * sizeof(char));
	if (!S->base)
	{
		printf("无法创建堆栈!\n");
		exit(0);
	}
	S->top = S->base;
	S->stacksize = STACK_CHAR_SIZE;
}
 
char GetTop(SqStack* S)  //获取栈顶元素
{
	if (S->top == S->base)
		return ' ';
	return *(S->top - 1);
}
 
void Push(SqStack* S, char e)  //将元素压入堆栈
 
{
	if (S->top - S->base >= STACK_CHAR_SIZE)
	{
		S->base = (char*)realloc(S->base, (S->stacksize + STACK_INC) * sizeof(char));
		if (!S->base)
		{
			printf("无法扩展堆栈\n");
			exit(0);
		}
		S->top = S->base + S->stacksize; //重新分配后，s->地址可能会变化，确保S->top和s->base关系绑定
		S->stacksize += STACK_INC;
	}
	*S->top++ = e;
}
 
char Pop(SqStack* S) //将栈顶元素弹出
{
	if (S->top == S->base)
		return ' ';
	return *--S->top;
}
 
int IsTerOrNon(char c)   //区分是终结符还是非终结符
{
	if (c >= 'A' && c <= 'Z')
		return 1; //表示是非终结符
	else if (c == '@' || c == '|' || c == ' ' || c == '\n' || c == '\r' || c == '\0' || c == '>')
		return 0; //表示一些无关的元素
	else
		return 2; //表示是终结符
}
 
int HaveChar(char str[], char c)  //判断数组中是否含有字符c
{
	int i = 0;
	while (str[i] != '\0') {
		if (c == str[i]) return 1;
		i++;
	}
	return 0;
}
 
void ReadFile(char s[])  //从文件中读取产生式，并将产生式分解，区分终结符和非终结符
{
	char temp[N]; //临时数组，用于存放每行产生式
	int index = 3;       //产生式结构体下标
	FILE* fp;
	fp = fopen(s, "r");
	if (fp != NULL)
	{
		printf("文件中的产生式为\n");
		while (fgets(temp, N, fp) != NULL)    //按行读取每句产生式，
		{
			printf("%s", temp);
			int index_temp = 3;  //临时数组的下标
			while (temp[index_temp] != '\0')     //写入终结符与非终结符数组
			{
				if (IsTerOrNon(temp[index_temp]) == 1)
				{
					if (!HaveChar(nterSymbol, temp[index_temp]))
					{
						nterSymbol[lenNTerStr] = temp[index_temp];
						lenNTerStr++;
					}
				}
				else if (IsTerOrNon(temp[index_temp]) == 2)
				{
					if (!HaveChar(terSymbol, temp[index_temp]))
					{
						terSymbol[lenTerStr] = temp[index_temp];
						lenTerStr++;
					}
				}
				index_temp++;
			}
			nterSymbol[lenNTerStr] = '\0';
			terSymbol[lenTerStr] = '\0';
 
			index_temp = 3;
			index = 3;
			gramOldSet[lenGramStr].formula[0] = temp[0];  //读取产生式左部字符
			gramOldSet[lenGramStr].formula[1] = '-';
			gramOldSet[lenGramStr].formula[2] = '>';
			while (temp[index_temp] != '\0')
			{
				if (temp[index_temp] == '\n' || temp[index_temp] == '\r')
				{
					gramOldSet[lenGramStr].formula[index] = '\0'; //每个产生式都已'\0'结尾，方便后面的遍历
					lenGramStr++;
					break;
				}
				else if (temp[index_temp] == '|')
				{
					index_temp++;
					gramOldSet[lenGramStr].formula[index] = '\0';
					lenGramStr++;
					gramOldSet[lenGramStr].formula[0] = temp[0];
					gramOldSet[lenGramStr].formula[1] = '-';
					gramOldSet[lenGramStr].formula[2] = '>';
					index = 3;
				}
				gramOldSet[lenGramStr].formula[index] = temp[index_temp];
				index++;
				index_temp++;
			}
		}
		gramOldSet[lenGramStr].formula[index] = '\0'; //遍历到最后，最后一个产生式还没有加上'\0'
		lenGramStr++;
	}
 
	else {
		printf("文件无法打开！");
	}
 
	printf("\n处理过的产生式为\n");
	for (int i = 0; i < lenGramStr; i++) {
		printf("%s\n", gramOldSet[i].formula);
	}
 
	printf("终结符都有:\n");
	for (int i = 0; i < lenTerStr; i++) {
		printf("%c ", terSymbol[i]);
	}
	printf("\n非终结符都有:\n");
	for (int i = 0; i < lenNTerStr; i++) {
		printf("%c ", nterSymbol[i]);
	}
	printf("\n");
}
 
int FindPosition(char c, char str[])  //定位终结符和非终结符位置
{
	int i = 0;
	while (str[i] != '\0') {
		if (c == str[i]) return i;
		i++;
	}
	return -1; //说明没有找到
}
 
void AddElement(char str[], char c)//将字符加入数组中，具有判重的功能
 
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return;
		i++;
	}
	str[i] = c;
	i++;
	flagFirstVT = 1;  //first还在扩大的标志
	flagLastVT = 1; //follow集还在扩大的标志
	str[i] = '\0';
}
 
 
void MergeStr(char str1[], char str2[])//将str2数组合并到str1数组中
{
	int i = 0;
	while (str2[i] != '\0')
	{
		char t = str2[i];
		AddElement(str1, t); //具有判重功能
		i++;
	}
}
 
int QueryLen(char str[]) {
	int i = 0;
	while (str[i] != '\0')i++;
	return i;
}
 
void CreatFirstVT()
{
	for (int i = 0; i < lenNTerStr; i++)//初始化
	{
		firstVT[i][0] = '\0';
	}
	while (flagFirstVT)
	{
		flagFirstVT = 0;
		for (int i = 0; i < lenGramStr; i++)
		{
			char temp = gramOldSet[i].formula[0];
			int index_temp = FindPosition(temp, nterSymbol);//定位非终结符位置下标
			if (IsTerOrNon(gramOldSet[i].formula[3]) == 2)
			{
				AddElement(firstVT[index_temp], gramOldSet[i].formula[3]);
			}
			if (IsTerOrNon(gramOldSet[i].formula[3]) == 1)
			{
				int j = FindPosition(gramOldSet[i].formula[3], nterSymbol);
				MergeStr(firstVT[index_temp], firstVT[j]);
				if (IsTerOrNon(gramOldSet[i].formula[4]) == 2)
				{
					AddElement(firstVT[index_temp], gramOldSet[i].formula[4]);
				}
			}
		}
	}
	for (int i = 0; i < lenNTerStr; i++)
	{
		printf("FirstVT(%c): ", nterSymbol[i]);
		for (int j = 0; j < lenTerStr; j++)
		{
			printf("%c ", firstVT[i][j]);
		}
		printf("\n");
	}
}
 
void CreatLastVT()
{
	for (int i = 0; i < lenNTerStr; i++)//初始化
	{
		lastVT[i][0] = '\0';
	}
	while (flagLastVT)
	{
		flagLastVT = 0;
		for (int i = 0; i < lenGramStr; i++)
		{
			int length = QueryLen(gramOldSet[i].formula);
			char temp = gramOldSet[i].formula[0];
			int index = 0;
			int index_temp = FindPosition(temp, nterSymbol);//定位非终结符位置下标
			if (IsTerOrNon(gramOldSet[i].formula[length - 1]) == 2)
			{
				AddElement(lastVT[index_temp], gramOldSet[i].formula[length - 1]);
			}
			if (IsTerOrNon(gramOldSet[i].formula[length - 1]) == 1)
			{
				int j = FindPosition(gramOldSet[i].formula[3], nterSymbol);
				MergeStr(lastVT[index_temp], lastVT[j]);
				if (IsTerOrNon(gramOldSet[i].formula[length - 2]) == 2)
				{
					AddElement(lastVT[index_temp], gramOldSet[i].formula[length - 2]);
				}
			}
		}
	}
	for (int i = 0; i < lenNTerStr; i++)
	{
		printf("LaststVT(%c): ", nterSymbol[i]);
		for (int j = 0; j < lenTerStr; j++)
		{
			printf("%c ", lastVT[i][j]);
		}
		printf("\n");
	}
}
 
int CreatTable()
{
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			table[i][j] = ' ';
		}
	}
	terSymbol[lenTerStr++] = '#';
	terSymbol[lenTerStr] = '\0';
	int temp = 0;
	while (lastVT[0][temp] != '\0')
	{
		int temp1 = FindPosition(lastVT[0][temp], terSymbol);
		int temp2 = FindPosition('#', terSymbol);
		table[temp1][temp2] = '>';
		table[temp2][temp2] = '=';
		temp++;
	}
	temp = 0;
	while (firstVT[0][temp] != '\0')
	{
		int temp1 = FindPosition(firstVT[0][temp], terSymbol);
		int temp2 = FindPosition('#', terSymbol);
		table[temp2][temp1] = '<';
		temp++;
	}
	for (int i = 0; i < lenGramStr; i++)
	{
		int index = 3;
		while (gramOldSet[i].formula[index] != '\0')
		{
			if (IsTerOrNon(gramOldSet[i].formula[index]) == 2)
			{
				if (IsTerOrNon(gramOldSet[i].formula[index - 1]) == 1)
				{
					int temp1 = FindPosition(gramOldSet[i].formula[index - 1], nterSymbol);
					int index_temp = 0;
					while (lastVT[temp1][index_temp] != '\0')
					{
						int temp2 = FindPosition(lastVT[temp1][index_temp], terSymbol);
						int temp3 = FindPosition(gramOldSet[i].formula[index], terSymbol);
						table[temp2][temp3] = '>';
						index_temp++;
					}
				}
				if (IsTerOrNon(gramOldSet[i].formula[index + 1]) == 1)
				{
					int temp1 = FindPosition(gramOldSet[i].formula[index + 1], nterSymbol);
					int index_temp = 0;
					while (firstVT[temp1][index_temp] != '\0')
					{
						int temp2 = FindPosition(firstVT[temp1][index_temp], terSymbol);
						int temp3 = FindPosition(gramOldSet[i].formula[index], terSymbol);
						table[temp3][temp2] = '<';
						index_temp++;
					}
				}
				if (IsTerOrNon(gramOldSet[i].formula[index + 1]) == 2)
				{
					int temp1 = FindPosition(gramOldSet[i].formula[index], terSymbol);
					int temp2 = FindPosition(gramOldSet[i].formula[index + 1], terSymbol);
					table[temp1][temp2] = '=';
				}
				if (IsTerOrNon(gramOldSet[i].formula[index + 2]) == 2)
				{
					int temp1 = FindPosition(gramOldSet[i].formula[index], terSymbol);
					int temp2 = FindPosition(gramOldSet[i].formula[index + 2], terSymbol);
					table[temp1][temp2] = '=';
				}
			}
			index++;
		}
	}
	printf("\n------------------------------------------------------------------------\n");
	printf("|\t|");
	for (int i = 0; i < lenTerStr; i++)
	{
		printf("   %c\t|", terSymbol[i]);
	}
	printf("\n------------------------------------------------------------------------\n");
	for (int i = 0; i < lenTerStr; i++) {
		for (int j = 0; j < lenTerStr; j++) {
			if (j == 0) printf("|   %c\t|", terSymbol[i]);
			printf("   %c\t|", table[i][j]);
		}
		printf("\n------------------------------------------------------------------------\n");
	}
}
 
char Alt(char c) {
	char i = 'i';
	if (c >= '0' && c <= '9') return i;
	return c;
}
 
char GetTer(SqStack* S, int k)    //获取从栈顶找到的首个终结符
{
	while (IsTerOrNon(*(S->base + k)) != 2 && k >= 0)k--;
	return *(S->base + k);
}
 
int GetTerPosition(SqStack* S, int k)
{
	while (IsTerOrNon(*(S->base + k)) != 2 && k >= 0)k--;
	return k;
}
 
int Calculate(char ch1, char ch2, char ch3)
{
	if (ch2 == '+') return (ch1 + ch3) % 48;
	if (ch2 == '-') return (ch1 % 48 - ch3 % 48);
	if (ch2 == '*') return (ch1 % 48) * (ch3 % 48);
	if (ch2 == '/') return (ch1 % 48) / (ch3 % 48);
	if (ch1 == '(' && ch3 == ')')return ch2;
}
void Meset(int n)
{
	while (n--) printf(" ");
}
void Control(char str[])
{
	printf("栈\t\t字符串\t\t\t产生式\n");
	SqStack* stack = (SqStack*)malloc(sizeof(SqStack));
	InitStack(stack);
	Push(stack, '#');
	int k = 0;    //栈的深度
	char stt[N];   //栈的同步数组
	stt[k] = '#';
	int pointer = 0;  //字符串下标
	int flag = 1;   //用于退出下面循环
	while (flag)
	{
		char* rer = stack->base;
		while (stack->top - rer)
		{
			printf("%c", *rer);
			rer++;
		}
		printf("\t\t");
		int n = pointer;
		int mark = 0;
		while (str[n] != '\0')
		{
			printf("%c", str[n++]);
			mark++;
		}
		Meset(24 - mark); //占位空格
		int index = FindPosition(Alt(str[pointer]), terSymbol);
		char ch = GetTer(stack, k);
		int  p = GetTerPosition(stack, k);  //定位ch在栈的深度
		int index_ch = FindPosition(Alt(ch), terSymbol);
		if (table[index_ch][index] == ' ') {    //包括归约时只有（
			flag = 0;
			printf("归约失败");
			break;
		}
		if (table[index_ch][index] == '<' || table[index_ch][index] == '=')
		{
			Push(stack, str[pointer]);
			stt[++k] = str[pointer];
			if (ch == '#' && str[pointer] == '#') {
				flag = 0;                  //归约成功出口
				printf("归约成功\n");
				printf("\n%s的计算结果为%d\n", str, stt[1]);
				break;
			}
			printf("%c %c %c", ch, table[index_ch][index], Alt(str[pointer]));
			printf("   %c移进\n", Alt(str[pointer]));
			pointer++;
		}
		if (table[index_ch][index] == '>')
		{
			int index_temp = 0;
			int i = k;
			int Flag = 1;
			do
			{
				char temp = *(stack->base + i);   //定义函数
				while (1)
				{
					i--;
					if (IsTerOrNon(Alt(temp)) == 2) break;
					temp = *(stack->base + i);
				}
				index_temp = FindPosition(Alt(temp), terSymbol);
				if (ch == ')') {
					if (table[index_temp][index_ch] == '=')
					{
						Flag = 0;
						i--;
					}
					else if (i == -1 || *(stack->base + p - 1) == '(')   //归约时只有’）‘,以及（）中无数字情况
					{
						flag = 0;
						printf("归约失败");
					}
				}
				else Flag = table[index_temp][index_ch] != '<';
			} while (Flag);
			i++;
 
			if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
			{
				char temp = *(stack->base + i + 1);
				if (IsTerOrNon(Alt(temp)) == 2 || p == k) {    //  *5或5*
					flag = 0;
					printf("规约失败");
				}
			}
			if (flag == 0) break;
 
			if (k - i == 3) stt[i + 1] = Calculate(stt[i + 1], stt[i + 2], stt[i + 3]);
 
			while (k > i)
			{
				Pop(stack);
				k--;
			}
			Push(stack, 'N');
			printf("%c %c %c  ", ch, table[index_ch][index], Alt(str[pointer]));
			printf("  用N归约\n");
			k++;
		}
	}
}
 
int main() {
	ReadFile("input.txt");
	CreatFirstVT();
	CreatLastVT();
	CreatTable();
	Control("(1*(2+3))-6/2#");
	return 0;
}
 
// E->E+T|E-T|T
// T->T*F|T/F|F
// F->(E)|i