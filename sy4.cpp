#include<iostream>
#include<cstring>
#include<set>
#include<string>
#include<fstream>
#include<map>
#include<iomanip>
#include<vector>
#include<stack>
using namespace std;
char S;//开始符
set<char> VN, VT,V;//非终结符，终结符
map<char, vector<string>> expressionSet;
//文法写在文件中
string PATH = "input.txt";
enum motionType {
	UNKNOWN, ADDS, REDU, ACC, ERR, GOTO
};
struct cell {
	motionType mt = UNKNOWN;
	int nxtsid = -1;
	int gid = -1;
};
cell table[100][100];
FILE* fin;
vector<string> filebuffer;//文件读取的缓冲区
vector<string> inputExpression;//最后增广完成，用于进行分析的文法
int Vcnt=0;//符号数量
string inputStr;//输入待分析的字符串
int index = 0;
map<char, int> charToId;
char idToChar[100];
int gcnt = 0;
map<char, vector<int>> Gright;
vector<pair<char, string>> G;
class grammer {
public:
	int gid;
	char left;
	string right;
	grammer(const int gid, const char left, const std::string& right) :gid(gid), left(left), right(right) {}
};
vector<grammer> Gs;
struct item {
	int gid;
	int i = 0;    // 形象的说，句点在第i个字符前：i=3, xxx.x，i=0, .xxxx, i=4, xxxx.
	bool operator < (const item& oth) const {
		if (gid == oth.gid) return i < oth.i;
		return gid < oth.gid;
	}
};    // 项目及项目的状态
class state {
public:
	int sid;
	bool end = false;
	vector<item> Is;    // 该状态下的所有项目
	set<char> right_VNs;
	bool findMore() {
		if (end) return false;
		bool found = false;
		for (auto& p : Is) {
			if (VN.count(Gs[p.gid].right[p.i]) && !right_VNs.count(Gs[p.gid].right[p.i])) {    // 加入待归约项目
				right_VNs.insert(Gs[p.gid].right[p.i]);
				found = true;
				for (auto& gid : Gright[Gs[p.gid].right[p.i]]) {
					Is.push_back({ gid, 0 });
				}
			}
		}
		return found;
	}
};
vector<state> Ss;
int scnt =0 ;

map<vector<item>, int> IsToId;
void read(){
	
	ifstream fin(PATH);
	string str;
	if (!fin.is_open()){
		cout << "can not open this file" << endl;
		return;
	}
	while (fin >> str)
		filebuffer.push_back(str);
	//输出读取到的文法
	for (string st : filebuffer)
		cout << st << endl;
}
//增广，删除竖线|
void deleteor(){
	for (string str : filebuffer){
		if (str.find('|') != string::npos){
			//将A->beta1|beta2拆成A->beta1和A->beta2
			string right1 = str.substr(3, str.find('|') - 3);
			string newstr1 = "";
			newstr1 = str[0] + (string)"->" + right1;
			inputExpression.push_back(newstr1);
			string right2 = str.substr(str.find('|') + 1);
			string newstr2 = "";
			newstr2 += str[0] + (string)"->" + right2;
			inputExpression.push_back(newstr2);
		}
		else
			inputExpression.push_back(str);
	}
	string newstr = "S";
	newstr = newstr + (string)"->"+inputExpression[0][0];
	inputExpression.insert(inputExpression.begin(), newstr);
	S = 'S';
	cout << "\n增广\n";
	for (string str : inputExpression)
		cout << str << endl;
}
void getRight(const string& gram) {
	int s;
	char left;
	for (s = 0; s < gram.length() && gram[s] == ' '; ++s);
	left = gram[s];
	if (S == '\0') S = left;    // 起始非终结符
	for (s = 1; s < gram.length() && gram[s] == ' '; ++s);
	s += 2;
	for (int i = s; i < gram.length(); ++i) 
		V.insert(gram[i]);    // 右部所有符号
	if (!VN.count(left)) {
		VN.insert(left);    // 非终结符
		charToId[left] = Vcnt;
		idToChar[Vcnt] = left;
		++Vcnt;
	}
	Gs.emplace_back(gcnt, left, gram.substr(s, gram.length() - s));
	Gright[left].push_back(gcnt);
	++gcnt;
}
void readGrammers() {
	VT.insert('#');    // 终结符'#'
	charToId['#'] = Vcnt;
	idToChar[Vcnt] = '#';
	++Vcnt;
	for (auto gram : inputExpression) 
		getRight(gram);
	for (auto str : inputExpression) {
		string strRight = str.substr(3);
		G.push_back({ str[0],strRight });
	}
	for (auto c : V) {
		if (!VN.count(c) && !VT.count(c)) {
			VT.insert(c);    // 终结符
			charToId[c] = Vcnt;
			idToChar[Vcnt] = c;
			++Vcnt;
		}
	}
}
void displayVnVt() {
	cout << "\n非终结符\n";
	for (auto c : VN)
		cout << c << " ";
	cout << "\n终结符\n";
	for (auto c : VT)
		cout << c << " ";
}
void printState(int sid) {
	cout << "\n---------state---------" << endl;
	cout << "sid: " << sid << endl;
	cout << "isend: " << (Ss[sid].end ? "true" : "false") << endl << endl;
	for (auto& p : Ss[sid].Is) {
		cout << Gs[p.gid].left << "->";
		for (int i = 0; i < p.i; ++i) {
			cout << Gs[p.gid].right[i];
		}
		cout << ".";
		for (int i = p.i; i < Gs[p.gid].right.length(); ++i) {
			cout << Gs[p.gid].right[i];
		}
		cout << endl;
	}
	cout << "-----------------------" << endl;
}
int derivateState(int isid, char c);

void derivateAll(int sid) {
	if (Ss[sid].end) return;
	std::set<char> input_c;
	for (auto& p : Ss[sid].Is) {
		input_c.insert(Gs[p.gid].right[p.i]);
	}
	for (auto& c : input_c) {
		int nxtsid = derivateState(sid, c);
		if (nxtsid == -1) continue;
		// assert(table[sid][charToId[c]].mt == UNKNOWN);
		if (VN.count(c)) {    // 是非终结符
			table[sid][charToId[c]].mt = GOTO;
			table[sid][charToId[c]].nxtsid = nxtsid;
		}
		else {    // 是终结符
			table[sid][charToId[c]].mt = ADDS;
			table[sid][charToId[c]].nxtsid = nxtsid;
		}
	}
}
int derivateState(int isid, char c) {
	if (Ss[isid].end) return -1;
	state ts;
	bool isend = false;
	for (auto& p : Ss[isid].Is) {
		if (Gs[p.gid].right[p.i] == c) {
			ts.Is.push_back({ p.gid,p.i + 1 });
			if (Gs[p.gid].right.length() == p.i + 1) {
				isend = ts.end = true;
			}
		}
	}
	if (ts.Is.size() == 0) return -1;
	ts.findMore();
	int sid;
	bool rec = false;
	if (IsToId.count(ts.Is)) {
		sid = IsToId[ts.Is];
		rec = true;
	}
	else {
		IsToId[ts.Is] = sid = scnt++;
		ts.sid = sid;
		Ss.push_back(ts);
		printState(sid);
	}

	if (!rec) derivateAll(sid);    // 这步递归调用有点危险

	return sid;
}

int generateI0() {
	Ss.emplace_back();
	Ss[0].right_VNs.insert(S);
	for (auto gid : Gright[S]) {    // 理论上用拓展文法拓展后，仅有一条入口规则
		Ss[0].Is.push_back({ gid,0 });
	}
	while (Ss[0].findMore());
	printState(0);
	IsToId[Ss[0].Is] = scnt++;
	return 0;
}
void fillTable() {
	int ssid = generateI0();
	derivateAll(ssid);
	for (int sid = 0; sid < IsToId.size(); ++sid) {
		if (Ss[sid].end) {    // 是终态
			if (Gs[Ss[sid].Is[0].gid].right[Ss[sid].Is[0].i - 1] == '#') {
				table[sid][charToId['#']].mt = ACC;
			}
			else {
				table[sid][0].mt = REDU;
				table[sid][0].gid = Ss[sid].Is[0].gid;
				for (int i = VN.size()+1; i < Vcnt; ++i) {
					table[sid][i].mt = REDU;
					table[sid][i].gid = Ss[sid].Is[0].gid;
				}
			}
		}
	}
}
map<char, string> LRTable[20];
void printTable() {
	cout <<setw(5)<< " ";
	for (int j = VT.size(); j < Vcnt; ++j) {
		char ch= idToChar[j];
		cout <<setw(5)<<ch;
	}
	for (int j = 0; j < VT.size(); ++j) {
		char ch= idToChar[j];
		cout << setw(5) << ch;
	}
	cout << endl;
	for (int i = 0; i < IsToId.size(); ++i) {
		cout << setw(5)<< i;
		for (int j = VT.size(); j < Vcnt; ++j) {
			if (table[i][j].mt == ADDS) {
				string str = "s" + to_string(table[i][j].nxtsid);
				LRTable[i][idToChar[j]] = str;
				cout << setw(5) << str;
			}
			else if (table[i][j].mt == REDU) {
				if (i == 1) {
					if (idToChar[j] == '#') {
						string str = "ACC";
						LRTable[i]['#'] = str;
						table[i][j].mt = ACC;
						cout << setw(5) << str;
					}
					else cout << setw(5) << " ";
				}
				else {
					string str = "r" + to_string(table[i][j].gid);
					LRTable[i][idToChar[j]] = str;
					LRTable[i]['#'] = str;
					cout << setw(5) << str;
				}
			}
			else if (table[i][j].mt == ACC) {
				string str = "ACC";
				LRTable[i][idToChar[j]] = str;
				cout << setw(5) << str;
			}
			else if (table[i][j].mt == GOTO) {
				string str = to_string(table[i][j].nxtsid);
				LRTable[i][idToChar[j]] = str;
				cout << setw(5) << str;
			}
			else {
				string str = "";
				cout << setw(5) << str;
			}
		}

		for (int j = 0; j < VT.size(); ++j) {
			if (table[i][j].mt == ADDS) {
				string str = "s" + to_string(table[i][j].nxtsid);
				LRTable[i][idToChar[j]] = str;
				cout << setw(5) << str;
			}
			else if (table[i][j].mt == REDU) {
				if (i == 1) {
					if (idToChar[j] == '#') {
						string str = "ACC";
						LRTable[i]['#'] = str;
						table[i][j].mt = ACC;
						cout << setw(5) << str;
					}
					else cout << setw(5) << " ";
				}
				else {
					string str = "r" + to_string(table[i][j].gid);
					LRTable[i][idToChar[j]] = str;
					LRTable[i]['#'] = str;
					cout << setw(5) << str;
				}
			}
			else if (table[i][j].mt == ACC) {
				string str = "ACC";
				LRTable[i][idToChar[j]] = str;
				cout << setw(5) << str;
			}
			else if (table[i][j].mt == GOTO) {
				string str = to_string(table[i][j].nxtsid);
				LRTable[i][idToChar[j]] = str;
				cout << setw(5) << str;
			}
			else {
				string str = "";
				cout << setw(5) << str;
			}
		}
		cout << endl;
	}
}
stack<int> statusStack;
stack<char> symbolStack;
void display(int p, string input, string action) {
	string status = "";
	stack<int> tempStatusStack = statusStack;
	while (!tempStatusStack.empty()) {
		status += to_string(tempStatusStack.top());
		tempStatusStack.pop();
	}
	string symbol = "";
	stack<char> tempSymbolStack = symbolStack;
	while (!tempSymbolStack.empty()) {
		symbol += tempSymbolStack.top();
		tempSymbolStack.pop();
	}
	string in = input.substr(p);
	string actionstr = "";
	if (action == "ACC")
		actionstr = "acc:分析成功";
	else if (action[0] == 'r') {
		actionstr += action;
		int st = stoi(action.substr(1));
		actionstr += ":用";
		actionstr += inputExpression[st];
		actionstr += "规约";
	}
	else if (action[0] == 's') {
		actionstr += action;
		int st = stoi(action.substr(1));
		actionstr += ":状态";
		actionstr += to_string(st);
		actionstr += "入栈";
	}
	cout << setw(20) << status << setw(20) << symbol << setw(20) << in << setw(20) << actionstr << endl;
}
void LR0Analysis() {
	inputStr += '#';
	int p = 0;
	cout << endl << inputStr << endl;
	cout << setw(20) << "状态栈" << setw(20) << "符号栈" << setw(20) << "输入串" << setw(20) << "动作" << endl;
	statusStack.push(0);
	symbolStack.push('#');
	while (1) {
		int status = statusStack.top();
		char nextChar = inputStr[p];
		int nextStatus = -1;
		if (LRTable[status].count(nextChar)) {
			string info = LRTable[status][nextChar];
			display(p,inputStr,info);
			if (info == "ACC")
				break;
			if (info[0] == 's') {//移进状态
				nextStatus = stoi(info.substr(1));
				statusStack.push(nextStatus);
				symbolStack.push(nextChar);
				p++;
			}
			else if (info[0] == 'r') {
				nextStatus = stoi(info.substr(1));
				for (int i = 0; i < G[nextStatus].second.size(); i++) {
					symbolStack.pop();
					statusStack.pop();
				}
				char temp = G[nextStatus].first;
				symbolStack.push(temp);
				int s = statusStack.top();
				statusStack.push(stoi(LRTable[s][temp]));
			}
			else {
				break;
			}
		}
		else {
			cout << "ERROR";
			return;
		}
	}
}
int main()
{
	//从文件读取文法
	read();
	//增广
	deleteor();
	readGrammers();
	displayVnVt();
    cout << "\n\n------------------------DFA------------------------:\n";
	fillTable();
	printTable();
	cout << "\n输入语句:\n";
	cin >> inputStr;
	LR0Analysis();
	return 0;
}
