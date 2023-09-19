#include<bits/stdc++.h>
using namespace std;
int main()
{
	char a[99999],b[99999];
	int x[99999]={0},y[99999]={0},z[99999]={0};
	int len,len1,len2;
	scanf("%s %s",a,b);
	len1=strlen(a);
	len2=strlen(b);
	if(len1>len2) len=len1;
	else len=len2;
	for(int i=len1-1;i>=0;i--)
	{
		x[len1-1-i]=a[i]-'0';
	}	
	for(int i=len2-1;i>=0;i--)
	{
		y[len2-1-i]=b[i]-'0';
	}
	for(int i=0;i<len;i++)
	{
		z[i]+=x[i]+y[i];
		z[i+1] += z[i]/10;
		z[i]=z[i]%10;
	}
	if(z[len]!=0)
	len++;
	while(z[len-1]==0&&len>1)
	len--;
	for(int i=len-1;i>=0;i--)
	{
        printf("%d",z[i]);
    }
	return 0;
}






#include<bits/stdc++.h>
using namespace std;
char s1[1000],s2[1000];
int ans[1000],tem;

void jiafa(char x[],char y[],int z[])
{
    int a[505]={0},b[505]={0};
    int la,lb,lc;

    la = strlen(x);
    lb = strlen(y);

    for(int i=0;i<la;i++)
    {
        a[la-i] = x[i] - '0';//将字符转为数字，并转置（把最后一位放到第一位）
    }
    for(int i=0;i<lb;i++)
    {
        b[lb-i] = y[i] - '0';
    }

    lc = max(la,lb) + 1;
    for(int i=1;i<=lc;i++)
    {
        z[i] += a[i]+b[i];
        z[i+1] = z[i]/10;
        z[i] = z[i]%10;
    }
    if(z[lc] == 0 && lc>0) lc--;//删去前导的0
    tem=lc;
}

int main()
{
    scanf("%s",s1);
    scanf("%s",s2);
    jiafa(s1,s2,ans);
    for(int i=tem;i>0;i--)
    {
        printf("%d",ans[i]);
    }
	return 0;
}




#include<bits/stdc++.h>
using namespace std;
int a[2000];
int b[2000];
int c[2000];
void pplus(int *a,int *c)
{
	int jw=0;
	for(int i=1;i<=1000;i++)  //计算每次阶乘都从个位开始 
	{
		c[i]+=a[i]+jw;
		jw=c[i]/10;
		c[i]%=10;
	}
}
int main()
{
    for(int i=0;i<1000;i++)
    {
        scanf("%d",&a[i]);
        scanf("%d",&c[i]);
    }
    pplus(a,c);
    bool flag=0;
	for(int i=1000;i>=1;i--)
	{
		if(c[i]!=0) flag=1;   //因为没有删去前导0，找到第一个不为0的数开始输出
		if(flag) printf("%d",c[i]);
	}
    return 0;
}


#include<bits/stdc++.h>
using namespace std;

int a[101],b[101];
//每一个数的阶乘
void mul(int n)
{
    int q = 0;
    for(int i=100;i>=0;i--)
    {
        b[i] = b[i] * n + q;
        q = b[i] / 10;
        b[i] = b[i] % 10;
    }
}
//阶乘完之后的加法
void add()
{
    int q = 0;
    for(int i=100;i>=0;i--)
    {
        a[i] = a[i] + b[i] + q;
        q = a[i] / 10;
        a[i] = a[i] % 10;
    }
}

int main()
{
    int n;
    cin>>n;
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    a[100] = 1;
    b[100] = 1;
    //开始计算
    for(int i=2;i<=n;i++)
    {
        mul(i);
        add();
    }
    //找到第一个不为0的数，从这里开始输出
    int j = 0;
    for(int i=0;i<=100;i++)
    {
        if(a[i]!=0)
        {
            j = i;
            break;
        }
    }

    for(int m=j;m<=100;m++)
    {
        cout<<a[m];
    }
    return 0;
}
