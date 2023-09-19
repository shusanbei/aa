// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     char a[100];
//     for(int i=0;i<=50;i++)
//     {
//         scanf("%c",&a[i]);
//         if(int (a[i])>=97&&int (a[i])<122){printf("%c",char (int (a[i])+n));}
//         if(int (a[i])==122){printf("%c",char (int (a[i])-26+n));}
//     }
//     return 0;
// }

#include<stdio.h>
#include<string.h>
int main()
{
    char str[500];//定义一个字符串存储原文字符串
    int n = 0;//定义一个int类型的变量存储n的值
    scanf("%d", &n);
    scanf("%s", str);
    int length;//定义一个length表示原字符串的长度
    length = strlen(str);
    for (int i = 0; i < length; i++)
    {
        if ((str[i] + n) > 122)
        {
            str[i] = '`' + (str[i]+n) - 122;
        }
        else if ((str[i] + n) <= 122)
        {
            str[i] = str[i] + n;
        }
    }
    printf("%s", str);
    return 0;
}
