#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
typedef struct employee
{
    char no[40];//职工号
    char name[40];//职工名称
    char sex[10];//职工性别
    int age;//职工年龄
    struct employee *next;//下一结点
}Node,*EMP;


//菜单栏
int menu()
{
    int a=5;
    printf("\n\n------------------------------------菜单------------------------------------\n");
    printf("\n(1)添加职工信息\n\n(2)删除职工信息\n\n(3)修改职工信息\n\n(4)查看当前所有职工信息\n\n(5)退出\n\n");
    printf("----------------------------------------------------------------------------\n\n");
    printf("请选择你需要的操作:\n");
    scanf("%d",&a);
    return a;
}

//建立带表头结点的线性链表
int star(EMP &L)
{
    L = (EMP)malloc(sizeof(Node));
    if (!L)
        exit(-2);
    L->next =NULL;
    return 1;
}

//将节点插入链表尾部
int Insert(EMP &L,EMP p)
{
    EMP q;
    q=L;
    while(q->next!=NULL)//找到最后一个结点
    {
        q=q->next;
    }
    //将两个结点连接
    p->next=NULL;
    q->next=p;
    return 1;
}

//输出信息
void brouse(EMP L)
{
    int i=0;
    EMP p;
    p=L->next;
    system("cls");//清屏
    if(p==NULL)
        printf("\n无职工信息,请添加\n");
    else
    {
        printf("\n\n////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
        printf("\n职工号         名称        性别          年龄\n");
        do
        {

            i+=1;
            if(!(i%6))//分页显示
                system("pause");
            printf("%s %s %s %d\n",p->no,p->name,p->sex,p->age);
            p=p->next;
        }
        while(p!=NULL);
        printf("\n////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n\n");
    }
    //菜单返回操作
    system("pause");
}

//存入文件函数
void save(EMP &L)
{
    FILE *fp;
    char FileName[15];
    strcpy(FileName,"zhigong.txt");//职工全部信息
    EMP p;
    p=L->next;
    if(p==NULL)
        printf("\n无职工信息,请添加\n");
    else
    {
        if((fp=fopen(FileName,"w"))==NULL)// 以可写的方式打开当前目录下的.txt
        {
            printf("不能打开此文件,请按任意键退出\n");
            exit(1);
        }
        while(p)//将所有信息写入文件中
        {
            fprintf(fp,"%s %s %s %d\n",p->no,p->name,p->sex,p->age);
            p=p->next;
        }
        printf("\n存入成功!\n\n");
        fclose(fp);//关闭文件
    }
    //菜单返回操作
    system("pause");
}

int load(EMP &L) //运行前把文件内容读取到电脑内存
{

    FILE *fp;
    char no[40];//职工号
    char name[40];//职工名称
    char sex[10];//职工性别
    int age;//职工年龄
    fp=fopen("zhigong.txt","rb"); //以只读方式打开当前目录下的.txt
    if(fp==NULL)//当文件不存在时，属于第一次打开，跳出这函数
        return 1;


    while(!feof(fp))
    {
        //获取一条数据
        fscanf(fp,"%s %s %s %d\n",&no,&name,&sex,&age);
        //	fseek(fp,1,0);
        EMP p=(EMP)malloc(sizeof(Node));
        //将获取到的数据传给p结点
        strcpy(p->no,no);
        strcpy(p->name,name);
        strcpy(p->sex,sex);
        p->age=age;
        Insert(L,p);//插入新的节点
    }
    fclose(fp);    //关闭文件
    return 1;
}

//添加职工信息数据
int addEmp(EMP &L)
{
    int i,n;
    system("cls");//清屏
    printf("需要输入多少个学生的信息?\n");
    scanf("%d",&n);
    EMP p;
    for(i=n;i>0;--i)
    {
        p=(EMP)malloc(sizeof(Node));//生成新结点
        printf("\n请输入职工号、姓名、性别、年龄(用空格分开):\n");
        scanf("%s %s %s %d\n",&p->no,&p->name,&p->sex,&p->age);
        Insert(L,p);//调用函数插入表尾
    }
    save(L);//调用保存函数
    return 1;
}

//修改职工信息
int update(EMP &L)
{
    system("cls");//清屏
    char i[40];
    int c=0;
    EMP p;
    if(L->next==NULL)
    {
        printf("\n无职工信息,请添加\n");
        system("pause");
        return 1;
    }
    else
    {
        printf("请选择:\n1、按职工号查找需要修改的职工\n\n2、按姓名查找需要修改的职工\n");
        scanf("%d",&c);
        if(c==1)
        {
            printf("请输入需要修改的职工信息的职工号: \n");
            scanf("%s",&i);
            p=L; //初始化，p指向第一个结点
            while(p&&strcmp(i,p->no) )
            {
                //顺指针向后查找，直到p指向该职工号或p为空
                p=p->next;
            }
            if (!p)
            {
                printf("无该职工号!\n");
                system("pause");
                return 1;
            }
        }
        else
        {
            printf("请输入需要修改的职工信息的姓名: \n");
            scanf("%s",&i);
            p=L; //初始化，p指向第一个结点
            while(p&&strcmp(i,p->name) )
            {
                //顺指针向后查找，直到p指向该学生姓名或p为空
                p=p->next;
            }
            if (!p)
            {
                printf("无该职工!\n");
                system("pause");
                return 1;
            }
        }
    }
    //找到该名职工后，修改信息
    printf("请输入修改后的职工号、姓名、性别、年龄(用空格分开):\n");
    scanf("%s %s %s %d\n",&p->no,&p->name,&p->sex,&p->age);
    save(L);//将修改后的数据保存
    return 1;
}

//删除职工信息函数
int deEmp(EMP &L)
{
    system("cls");//清屏
    char i[15];
    int c=0;
    if(L->next==NULL)
    {
        printf("\n无职工信息，请添加\n");
        system("pause");
    }
    else
    {
        EMP p,q;
        printf("请选择：\n1、按职工号查找需要删除的职工\n\n2、按姓名查找需要删除的职工\n");
        scanf("%d",&c);
        if(c==1)
        {
            printf("请输入需要删除的职工信息的学号: \n");
            scanf("%s",&i);
            p=L; //初始化，p指向第一个结点
            while(strcmp(i,(p->next)->no))//顺指针向后查找，直到p指向需要删除信息的职工前一位
            {
                p=p->next;
                if(!(p->next))//到这里证明无该职工号，退出循环
                    break;
            }
            if (!(p->next))
            {
                printf("无该职工号!\n");
                system("pause");
                return 1;
            }
        }
        else
        {
            printf("请输入需要删除的职工信息的姓名: \n");
            scanf("%s",&i);
            p=L; //初始化，p指向第一个结点
            while(strcmp(i,(p->next)->name))//顺指针向后查找，直到p指向需要删除信息的职工前一位或p为空
            {
                p=p->next;
                if(!(p->next))//到这里证明无该职工，退出循环
                    break;
            }
            if (!(p->next))
            {
                printf("无该职工!\n");
                system("pause");
                return 1;
            }
        }
        q=p->next;
        p->next=q->next;
        //回收被删除结点空间
        free(q);
        printf("删除成功!\n");
        save(L);//删除后保存信息
    }
    return 1;
}


int main()
{
    EMP L;
    star(L);//建立链表头结点
    load(L);//读取已有文件内容
    while(1)
    {
        system("cls");//清屏
        switch(menu())
        {
        case 1:
            addEmp(L);//添加职工信息
            break;
        case 2:
            deEmp(L);//删除职工信息并保存
            break;
        case 3:
            update(L);//修改职工信息并保存
            break;
        case 4:
            brouse(L);//输出所有职工信息
            break;
        case 5:
            printf("再见,欢迎下次使用\n");//退出
            exit(0);
        default:
            printf("选项不存在!将返回菜单\n");
            system("pause");
            break;
        }
    }
    return 0;
}