#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;
    printf("请输入两个整数：");
    scanf("%d %d", &num1, &num2);

    int result = gcd(num1, num2);
    printf("这两个数的最小公约数是：%d\n", result);

    return 0;
}