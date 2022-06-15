#include<stdio.h>
int main()
{
    double a;
    scanf("%lf",&a);
    if(a>=0.00 && a<=2000.00)
    {
        printf("Isento\n");
    }
    else if(a>=2000.01 && a<=3000.00)
    {
        a=a-2000.00;
        printf("R$ %.2lf\n",a*.08);
    }
    else if(a>=3000.01 && a<=4500.00)
    {
        a=a-2000.00;
        a=a-1000.00;
        printf("R$ %.2lf\n",1000.00*.08+a*.18);
    }
    else if(a>4500.00)
    {
        a=a-2000.00;
        a=a-2500.00;
        printf("R$ %.2lf\n",a*.28+1000.00*.08+1500.00*.18);
    }

    return 0;
}
