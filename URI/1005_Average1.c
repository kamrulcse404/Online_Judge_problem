#include<stdio.h>
int main()
{
    double A=3.5,B=7.5,c,d,e,f,sum ,s,res;
    scanf("%lf%lf",&c,&d);
    e=A*c;
    f=B*d;
    sum=e+f;
    s=A+B;
    res=sum/s;
    printf("MEDIA = %.5lf\n",res);

    return 0;
}
