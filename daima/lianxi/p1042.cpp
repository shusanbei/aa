#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char ar;
    int a=0,b=0,arr[62555]={0};
    for(int i=0;cin>>ar&&ar!='E';i++)
    {
        if(ar=='W')
        {
            arr[i]=1;
        }
        else 
        {
            arr[i]=2;
        }
    }
    for(int i=0;;i++)
    {
        if(arr[i]==1)a++;
        if(arr[i]==2)b++;
        if(arr[i]==0)
        {
            printf("%d:%d\n",a,b);
            break;
        }
        if(a-b>=2||b-a>=2)
        {
            if(a>=11||b>=11)
            {
                printf("%d:%d\n",a,b);
                a=0;
                b=0;
            }
        }
    }
    printf("\n");
    a=0;
    b=0;
    for(int i=0;;i++)
    {
        if(arr[i]==1)a++;
        if(arr[i]==2)b++;
        if(arr[i]==0)
        {
            printf("%d:%d",a,b);
            break;
        }
        if(a-b>=2||b-a>=2)
        {
            if(a>=21||b>=21)
            {
                printf("%d:%d\n",a,b);
                a=0;
                b=0;
            }
        }
    }    
    return 0;
}