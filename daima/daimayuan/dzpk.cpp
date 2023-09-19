#include<bits/stdc++.h>
using namespace std;
int n[8],m[8];

int main()
{
    for(int i=0;i<5;i++)
    {
        cin>>n[i];
    }
    for(int i=0;i<5;i++)
    {
        cin>>m[i];
    }
    sort(n,n+5);

    if(n[0]==10 && n[1]==11 && n[2]==12 && n[3]==13 && n[4]==14 && (m[0]==m[1] && m[1]==m[2] && m[2]==m[3] && m[3]==m[4]) )
    {
        cout<<"ROYAL FLUSH";
        return 0;
    }
    if(n[0]+1==n[1] && n[1]+1==n[2] && n[2]+1==n[3] && n[3]+1==n[4] && (m[0]==m[1] && m[1]==m[2] && m[2]==m[3] && m[3]==m[4]))
    {
        cout<<"STRAIGHT FLUSH";
        return 0;
    }
    if(m[0]==m[1] && m[1]==m[2] && m[2]==m[3] && m[3]==m[4])
    {
        cout<<"FLUSH";
        return 0;
    }

    else
    {
        if((n[0]==n[1] && n[1]==n[2] && n[2]==n[3] && n[3]==n[4]) || ( (n[0]==n[1] && n[1]==n[2] && n[2]==n[3]) || (n[1]==n[2] && n[2]==n[3] && n[3]==n[4]) ) )
        {
            cout<<"FOUR OF A KIND";
            return 0;
        }
        if( (n[0]==n[1]&&n[1]==n[2]&&n[3]==n[4]) || (n[2]==n[3]&&n[3]==n[4]&&n[0]==n[1]) )
        {
            cout<<"FULL HOUSE";
            return 0;
        }
        if(n[0]+1==n[1] && n[1]+1==n[2] && n[2]+1==n[3] && n[3]+1==n[4])
        {
            cout<<"STRAIGHT";
            return 0;
        }
    }
    cout<<"FOLD";
    return 0;
}