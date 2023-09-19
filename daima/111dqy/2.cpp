#include<iostream>
#include<cstring>
using namespace std;
const int n = 10;
class Set{
    public:
        int add(int x);//添加元素
        void delet(int x);//删除元素
        void print();//输出元素
        Set jiaoji(Set A,Set B);
        Set bingji(Set A,Set B);
        Set chaji(Set A,Set B);
        ~Set();//析构函数
    private:
        int a[1001];
        int temp;
};
Set::add(int x)
{
    for(int i=0;i<temp;i++){
        if(x==a[i]){
            cout<<"元素"<<x<<"已重复无法加入"<<endl;
            return 0;
        }
        a[temp++]=x;
    }
    return 1;
}
void Set::delet(int x)
{
    int tip=0;
    for(int i=0;i<temp;i++){
        if(a[i]==x){
            tip=1;
            for(int j=i;j<temp;j++)
                a[j]=a[j+1];
            temp--;
        }
    }
    if(tip)
        cout<<"删除元素"<<x<<"成功"<<endl;
    else
        cout<<"不该元素不存在"<<x<<endl;
}
void Set::print()
{
    for(int i=0;i<temp;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
Set::~Set()
{
    cout<<endl;
    cout<<"Destructor is called"<<endl;
}

    //交集
Set Set::jiaoji(Set A,Set B)
{
    Set C;
    bool flag=true;
    for(int i=0;i<A.temp;i++){
        for(int j=0;j<B.temp;j++){
        if(A.a[i]==B.a[j]){
            C.add(A.a[i]);
            flag=false;
            break;
        }
    }
    }
    if(!flag){
        return C;
    }
    else
        cout<<"集合A和集合B的交集为空"<<endl;
}
    //并集
Set Set::bingji(Set A,Set B){
    for(int i=0;i<B.temp;i++){
        A.add(B.a[i]);
    }
    return A;
}

//差集
Set Set::chaji(Set A,Set B){
    Set C=jiaoji(A,B);
    bool flag=true;
    for(int i=0;i<A.temp;i++){
        for(int j=0;j<C.temp;j++){
            if(A.a[i]==C.a[j]){
                A.delet(C.a[j]);
                flag=false;
        	}
        }
    }
    if(!flag){
        return A;
    }
    else
        cout<<"集合A和集合B的差集为空"<<endl;
}
int main()
{
    Set A,B;
    cout<<"输入A的数量："<<endl;
    int n;
    int x;
    cin>>n;
    cout<<"输入A的元素："<<endl;
    for(int i=0;i<n;i++){
        cin>>x;
        A.add(x);
    }
    cout<<"输入B的数量："<<endl;
    cin>>n;
    cout<<"输入B的元素："<<endl;
    for(int i=0;i<n;i++){
        cin>>x;
        B.add(x);
    }
    Set C;
    C=A.jiaoji(A,B);
    cout<<"集合A和集合B的交集为："<<endl;
    C.print();
    C=A.bingji(A,B);
    cout<<"集合A和集合B的并集为："<<endl;
    C.print();
    C=A.chaji(A,B);
    cout<<"A-B为："<<endl;
    C.print();
    C=A.chaji(B,A);
    cout<<"B-A为"<<endl;
    C.print();
    return 0;
}