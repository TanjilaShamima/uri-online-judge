#include<stdio.h>
#define PI 3.14159
int main()
{
    double R, value;
    scanf("%lf", &R);
    value = (4.0/3) * PI * (R*R*R);
    printf("VOLUME = %.3f\n", value);
    return 0;
}
