#include<stdio.h>
int main(void)
{
    double a,b,in,sum;
    char ch='%';
    scanf("%lf %lf",&a,&b);
    in=b-a;
    sum=(in*100)/a;
    printf("%.2lf%c\n",sum,ch);


    return 0;
}
