#include<stdio.h>

int main()
{
    int num1, num2;

    float slv;

    scanf("%d %d", &num1, &num2);

    slv = (num2*num1)/12.0;

    printf("%.3f\n", slv);

    return 0;
}