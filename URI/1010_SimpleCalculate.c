#include<stdio.h>
int main()
{
    int a,b,d,e;
    double c,f,sum;
    scanf("%d%d%lf",&a,&b,&c);
    scanf("%d%d%lf",&d,&e,&f);
    sum=(b*c)+(e*f);
    printf("VALOR A PAGAR: R$ %.2lf\n",sum);

    return 0;
}
