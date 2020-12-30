#include<stdio.h>
int main()
{
    int n, m, p, q, r, s, t, hundrade, fifty, twenty, ten, five, two, one ;
    scanf("%d", &n);

    hundrade = n/100;
    m = n%100;
    fifty = m/50;
    p = m%50;
    twenty = p/20;
    q = p%20;
    ten = q/10;
    r = q%10;
    five = r/5;
    s = r%5;
    two = s/2;
    t = s%2;
    one = t/1;
    printf("%d\n", n);
    printf("%d nota(s) de R$ 100,00\n", hundrade);
    printf("%d nota(s) de R$ 50,00\n", fifty);
    printf("%d nota(s) de R$ 20,00\n", twenty);
    printf("%d nota(s) de R$ 10,00\n", ten);
    printf("%d nota(s) de R$ 5,00\n", five);
    printf("%d nota(s) de R$ 2,00\n", two);
    printf("%d nota(s) de R$ 1,00\n", one);
    return 0;
}