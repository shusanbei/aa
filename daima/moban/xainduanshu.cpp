#include<bits/stdc++.h>
 
using namespace std;
const int maxn=1e6+5;
 
long long C[maxn],n=10;             //C数组求区间和 
long long del1[maxn],del2[maxn];    //del数组用于区间修改 
long long Map[maxn];                //区间修改储存原数组，区间求最值储存原数组 
long long maxx[maxn],minn[maxn];    //maxx数组用于储存最大值，minn数组用于储存最小值 
 
int lowbit(int k)
{
	return k&(-k);
}
 
void add(int x,int y)        //C[x]的值增加y 
{
	while(x<=n)
	{
	 	C[x]+=y;
	 	x+=lowbit(x);
	}
}
 
long long read(int x)     //1到x之间的各位数之和 
{
	long long sum=0;
	while(x)
	{
		sum+=C[x];
		x-=lowbit(x);
	}
	return sum;
}
 
long long Sigma(long long *arra,long long x)   //数组中1到x的和
{
	long long ans=0;
	while(x)
	{
		ans+=arra[x];
		x-=lowbit(x);
	}
	return ans;
}
 
void updata(long long *c,long long x,long long y)   //在数组c中前x加入y
{
	while(x<=n)
	{
		c[x]+=y;
		x+=lowbit(x);
	}
}
 
void query_max(int l,int r)
{
    long long ans=Map[r];
    while(true)
	{
        ans=max(ans,Map[r]);
        if(r==l) 
		break;
        for(r-=1;r-l>=lowbit(r);r-=lowbit(r))
		{
            ans=max(ans,maxx[r]);
        }
    }
    cout<<"最大值为："<<ans<<endl;
}
 
void query_min(int l,int r)
{
    long long ans=Map[r];
    while(true)
	{
        ans=min(ans,Map[r]);
        if(r==l) 
		break;
        for(r-=1;r-l>=lowbit(r);r-=lowbit(r))
		{
            ans=min(ans,minn[r]);
        }
    }
    cout<<"最小值为："<<ans<<endl;
}
 
int main()
{
	int n,i,j,k,q,x,y,z;
	cout<<"输入10个数，创建树状数组："<<endl;
	for(i=1;i<=10;i++)
	{
		cin>>x;
		add(i,x);
	}
	for(i=1;i<=10;i++)
	cout<<"i="<<i<<"******"<<C[i]<<"*****"<<endl;
	
	cout<<"区间查询："<<endl;
	cout<<read(4)<<"***"<<endl;
	cout<<read(8)<<"***"<<endl;
	cout<<read(8)-read(3)<<endl;
	
	cout<<"区间修改："<<endl;
	for(i=1;i<=10;i++)
	{
		cin>>Map[i];
		updata(del1,i,Map[i]-Map[i-1]);
		updata(del2,i,(i-1)*(Map[i]-Map[i-1]));
	}
	while(cin>>q&&q)
	{
		if(q%2)
		{
			cout<<"区间修改，输入要修改的区间以及要添加的值："<<endl;
			cin>>x>>y>>z;
			updata(del1,x,z);updata(del1,y+1,-z);  
            updata(del2,x,z*(x-1));updata(del2,y+1,-z*y);
		}
		else
		{
			cout<<"区间查询，输入要查询的区间："<<endl;
			cin>>x>>y;
			long long sum1=(x-1)*Sigma(del1,x-1)-Sigma(del2,x-1);  
            long long sum2=y*Sigma(del1,y)-Sigma(del2,y);  
            printf("%lld\n",sum2-sum1);
		}
	}
	cout<<"求区间最值："<<endl;
	for(i=1;i<=10;i++)
	{
	    maxx[i]=Map[i];
	    for(int j=1;j<lowbit(i);j<<=1)
		{
	        maxx[i]=max(maxx[i],maxx[i-j]);
	    }
	}
	for(i=1;i<=10;i++)
	{
	    minn[i]=Map[i];
	    for(int j=1;j<lowbit(i);j<<=1)
		{
	        minn[i]=min(minn[i],minn[i-j]);
	    }
	}
	while(cin>>x>>y)
	{
	    query_max(x,y);
	    query_min(x,y);
    }
    return 0;
}