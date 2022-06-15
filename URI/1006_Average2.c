#include<stdio.h>
int main()
{
    double A=2,B=3,C=5,d,e,f,g,h,i,sum ,s,res;
    scanf("%lf%lf%lf",&d,&e,&f);
    g=A*d;
    h=B*e;
    i=C*f;
    sum=g+h+i;
    s=A+B+C;
    res=sum/s;
    printf("MEDIA = %.1lf\n",res);

    return 0;
}
