#include<stdio.h>
#include<math.h>

int main()
{
    double A,B,C,sq,t,c;
    scanf("%lf%lf%lf",&A,&B,&C);
    c=(B*B-(4*A*C));
    sq=sqrt(B*B-(4*A*C));
    t=2*A;
    if(c<0 || t==0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        printf("R1 = %0.5lf\n",((-B+sq)/(2*A)));
        printf("R2 = %0.5lf\n",((-B-sq)/(2*A)));
    }
    return 0;
}
