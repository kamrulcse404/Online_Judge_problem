#include<stdio.h>
int main()
{
    double a,b,c,sum;
    char s[100];
    scanf("%s",s);
    scanf("%lf%lf",&a,&b);
    c=b*.15;
    sum=c+a;
    printf("TOTAL = R$ %.2lf\n",sum);

    return 0;
}

