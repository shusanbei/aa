#include<bits/stdc++.h>
using namespace std;
struct stu
{
    char name[1010];
    int x,y,z;
    int zf=0;
}s[1010];
int cmp(int k,int l)
{
    if(abs(s[k].x-s[l].x)<=5 && abs(s[k].y-s[l].y)<=5 && abs(s[k].z-s[l].z)<=5 && abs(s[k].zf-s[l].zf)<=10)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        cin>>s[i].name>>s[i].x>>s[i].y>>s[i].z;
        s[i].zf=s[i].x+s[i].y+s[i].z;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(cmp(i,j)) printf("%s %s\n",s[i].name,s[j].name);
        }
    }
    return 0;
}


#include<stdio.h>
#include<string.h>
#include<stdio.h>
#include <iostream>
#include<cmath>
using namespace std;

int min(int x, int y)
{
    return x < y ? x :y;
}
int main()
{
    int n;
    scanf("%d", &n);
    int sx, sy, tx, ty;
    scanf("%d%d%d%d", &sx, &sy, &tx, &ty);
    int a, b, c, d, e, f, g, h;
    cin >> a >> b >> c >> d >> e >> f >> g >> h;
    int ans = 0;
if(sx<1||sy<1||tx<1||ty<1||sx>n||sy>n||tx>n||ty>n){return 0;}
    if (sx == tx) {//同行
        if (sy > ty) {
            ans = c * abs(sy - ty);
            printf("%d", ans);
            return 0;
        }
        else if(sy<ty){
            ans = g * abs(sy - ty);
            printf("%d", ans);
            return 0;
        }
    }
    else if (ty == sy) {//同列
        if (sx > tx) {
            ans = a * abs(tx - sx);
            printf("%d", ans);
        }
        else if(sx<tx){
            ans = e * abs(tx - sx);
            printf("%d", ans);
        }
        return 0;
    }
    else//既不同行业不同列
    {
        int x = abs(sx - tx);
        int y = abs(sy - ty);
        if (sx < tx && sy < ty)//s在t左上
        {
            if (f < e + g)
            {
                for (int i = 0; i < min(x,y); i++)
                {
                    ans += f;
                }
                if (x > y)
                {
                    ans += e * abs(x - y);
                    printf("%d", ans);
                    return 0;
                }
                else
                {
                    ans += g * abs(x - y);
                    printf("%d", ans);
                    return 0;
                }
            }
            else
            {
                ans = abs(sy - ty) * e + abs(sx - tx) * g;
                printf("%d", ans);
                return 0;
            }
        }
        else if (sx > tx && sy > ty)//s在t右下
        {
            if (b < a + c)
            {
                for (int i = 0; i < min(x, y); i++)
                {
                    ans += b;
                }
                if (x > y)
                {
                    ans += a * abs(x - y);
                    printf("%d", ans);
                    return 0;
                }
                else
                {
                    ans += c * abs(x - y);
                    printf("%d", ans);
                    return 0;
                }
            }
            else
            {
                ans = abs(sy - ty) * a + abs(sx - tx) * c;
                printf("%d", ans);
                return 0;
            }
        }
        else if (sx > tx && sy < ty)//s在t左下
        {
            if (h < a + g)
            {
                for (int i = 0; i < min(x, y); i++)
                {
                    ans += h;
                }
                if (x > y)
                {
                    ans += a * abs(x - y);
                    printf("%d", ans);
                    return 0;
                }
                else
                {
                    ans += g * abs(x - y);
                    printf("%d", ans);
                    return 0;
                }
            }
            else
            {
                ans = abs(sy - ty) * a + abs(sx - tx) * g;
                printf("%d", ans);
                return 0;
            }
        }
        else if (sx<tx && sy>ty)//s在t右上
        {
            if (d < c + e)
            {
                for (int i = 0; i < min(x, y); i++)
                {
                    ans += d;
                }
                if (x > y)
                {
                    ans += e * abs(x - y);
                    printf("%d", ans);
                    return 0;
                }
                else
                {
                    ans += c * abs(x - y);
                    printf("%d", ans);
                    return 0;
                }
            }
            else
            {
                ans = abs(sy - ty) * e + abs(sx - tx) * c;
                printf("%d", ans);
                return 0;
            }
        }
    }
    printf("%d",ans);
    system("pause");
    return 0;
}