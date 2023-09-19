// #include<bits/stdc++.h>
// using namespace std;
// long long x,ans[1000009],op[1000009],n,tem;
// bool cmp(int x,int y)
// {
//     return x>y;
// }
// int main()
// {
//     scanf("%lld",&n);
//     for(int i=0;i<n;i++)
//     {
//         scanf("%lld",&op[i]);
//         if(op[i]==1)
//         {
//             scanf("%lld",&x);
//             ans[tem++]=x;
//         }
//         if(op[i]==2)
//         {
//             sort(ans,ans+tem);
//             printf("%lld\n",ans[0]);
//         }
//         if(op[i]==3)
//         {
//             sort(ans,ans+tem,cmp);
//             tem--;
//         }
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
void swap(int arr[],int i,int j)
{
    int tem=arr[i];
    arr[i]=arr[j];
    arr[j]=tem;
}
void heapify(int tree[],int n,int i)
{
    if(i>n) return; 
    int c1=2*i+1;
    int c2=2*i+2;
    int max=i;
    if(c1<n&&tree[c1]>tree[max]){max=c1;}
    if(c2<n&&tree[c2]>tree[max]){max=c2;}
    if(max!=i)
    {
        swap(tree,max,i);
        heapify(tree,n,max);
    }
}
void build_heap(int tree[],int n)
{
    int last_note=n-1;
    int parent=(last_note-1)/2;
    for(int i=0;i>=0;i++)
    {
        heapify(tree,n,i);
    }
}
void heap_sort(int tree[],int n)
{
    build_heap(tree,n);
    for(int i=n-1;i>=0;i--)
    {
        swap(tree,i,0);
        heapify(tree,i,0);
    }
}
int x,ans[1000009],op[1000009],n,tem;
int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&op[i]);
        if(op[i]==1)
        {
            scanf("%d",&x);
            ans[tem++]=x;
        }
        if(op[i]==2)
        {
            heap_sort(ans,tem);
            printf("%d\n",ans[0]);
        }
        if(op[i]==3)
        {
            build_heap(ans,tem);
            tem--;
        }
    }
    return 0;
}