#include<stdio.h>
int main()
{
    double m,h,BMI;
    scanf("%lf %lf",&m,&h);
    BMI=m/(h*h);
    if(BMI<18.5){printf("Underweight");}
    if(BMI>=18.5&&BMI<24){printf("Normal");}
    if(BMI>=24){printf("%.6g\nOverweight",BMI);}
    return 0;
}