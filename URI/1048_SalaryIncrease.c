#include<stdio.h>
int main()
{
    double a;
    char c='%';
    scanf("%lf",&a);
    if (a>=0.0 && a<=400.0)
    {
        printf("Novo salario: %.2lf\n",a+(a*.15));
        printf("Reajuste ganho: %.2lf\n",a*.15);
        printf("Em percentual: 15 %c\n",c);
    }
    else if(a>=400.01 && a<=800.0)
    {
        printf("Novo salario: %.2lf\n",a+(a*.12));
        printf("Reajuste ganho: %.2lf\n",a*.12);
        printf("Em percentual: 12 %c\n",c);
    }
    else if(a>=800.01 && a<=1200.0)
    {
        printf("Novo salario: %.2lf\n",a+(a*.10));
        printf("Reajuste ganho: %.2lf\n",a*.10);
        printf("Em percentual: 10 %c\n",c);
    }
    else if(a>=1200.01 && a<=2000.0)
    {
        printf("Novo salario: %.2lf\n",(a+((a*.7)/10)));
        printf("Reajuste ganho: %.2lf\n",(a*.7)/10);
        printf("Em percentual: 7 %c\n",c);
    }
    else if (a>2000.0){
          printf("Novo salario: %.2lf\n",(a+((a*.4)/10)));
        printf("Reajuste ganho: %.2lf\n",(a*.4)/10);
        printf("Em percentual: 4 %c\n",c);
    }


    return 0;
}
