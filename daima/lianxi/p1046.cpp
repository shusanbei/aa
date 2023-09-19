#include<stdio.h>
#define APPLES 10                             
int main()
{
    int height[APPLES];                  
    int T_Height;                           
    int js = 0;                                 
    int md=0;                                
    do
    {
        scanf("%d",&height[js]);                  
        js++;
    } while (js < APPLES);                       
    scanf("%d", &T_Height);                    
    js = 0;                                              
    while (js <APPLES)
    {
        if (height[js] - 30 <= T_Height)                    
        {
            md++;                                                    
        }
        js++;
    }
    printf("%d",md);                                             
    return 0;
}