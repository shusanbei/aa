#include<stdio.h>

typedef struct {
	double s,x;
}Complex;

//输出一个复数
void Complexpr(Complex a){ 
	if(a.x<0){
		printf("%lf%lfi\n",a.s,a.x);
	}
	else{
		printf("%lf+%lfi\n",a.s,a.x);
	}
}
//计算复数a与b的和
Complex Complexadd(Complex a,Complex b){
	Complex c;
	c.s=a.s+b.s;
	c.x=a.x+b.x;
	return c;
}
//计算复数a与b的差
Complex Complexmin(Complex a,Complex b){
	Complex c;
	c.s=a.s-b.s;
	c.x=a.x-b.x;
	return c;
}
//计算复数a与b的积
Complex Complexmub(Complex a,Complex b){
	Complex c;
	c.s=a.s*b.s-a.x*b.x;
	c.x=(a.s*b.x)+(a.x*b.s);
	return c;
}
//分离实部
void Complexprshi(Complex a){
	printf("实部为:%lf\n",a.s);
}
//分离虚部
void Complexprxu(Complex a){
	printf("虚部为:%lf\n",a.x);
}
int main(){
	Complex a,b;
	
	printf("请输入a的实部与虚部:");
	scanf("%lf %lf",&a.s,&a.x);
	printf("请输入b的实部与虚部:");
	scanf("%lf %lf",&b.s,&b.x);

	printf("a的:");	
	Complexprshi(a);
	Complexprxu(a);
	printf("b的:");	
	Complexprshi(b);
	Complexprxu(b);

	printf("a=");
	Complexpr(a);
	printf("b=");
	Complexpr(b);
	Complex c=Complexadd(a,b);
	printf("a+b=");
	Complexpr(c);
	Complex d=Complexmin(a,b);
	printf("a-b=");
	Complexpr(d);
	Complex e=Complexmub(a,b);
	printf("a*b=");
	Complexpr(e);
	return 0;
}
