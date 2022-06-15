#include<stdio.h>
int main()
{
    int n,Gasolina=0,Alcool=0, Diesel=0;
    while(1)
    {
        scanf("%d",&n);
        if(n==1)
        {
            Alcool++;
        }
        if(n==2)
        {
            Gasolina++;
        }
        if(n==3)
        {
            Diesel++;
        }
        if(n==4)
        {
            break;
        }
        if(n<=0 && n>4)
        {
            while(1)
            {
                scanf("%d",&n);
                if(n==1)
                {
                    Alcool++;
                }
                if(n==2)
                {
                    Gasolina++;
                }
                if(n==3)
                {
                    Diesel++;
                }
                if(n==4)
                {
                    break;
                }
            }
        }
    }
     printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",Alcool,Gasolina,Diesel);

    return 0;
}
