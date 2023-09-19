#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    char s[105];
	scanf("%d%d",&n,&m);
    scanf("%s",s+1);
	while(m--)
	{
		int l,r;
		char c1[3],c2[3];
		scanf("%d%d%s%s",&l,&r,c1,c2);
		for(int i=l;i<=r;i++)
		{
            if(s[i]==c1[0])s[i]=c2[0];
        }
	}
	printf("%s\n",s+1);
	return 0;
}

