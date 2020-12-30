#include<stdio.h>
int main()
{
    char name[10];
    gets(name);
    double A, B, TOTAL;
    scanf("%lf %lf", &A, &B);
    TOTAL=(.15*B)+A;
    printf("TOTAL = R$ %.2f\n", TOTAL);


    return 0;
}
