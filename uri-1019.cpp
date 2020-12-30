#include<stdio.h>
int main()
{
    int N, M, hours, minutes, secound;

    scanf("%d", &N);

    hours = N / 3600;
    M = N % 3600;
    minutes = M / 60;
    secound = M % 60;

    printf("%d:%d:%d\n", hours, minutes, secound);

    return 0;

}