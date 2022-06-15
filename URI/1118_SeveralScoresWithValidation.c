#include<stdio.h>
int main()
{
    double n,sum=0;
    int x,count=0;
    while(1)
    {
        scanf("%lf",&n);
        if(n<0.0 || n>10.0)
        {
            printf("nota invalida\n");
        }
        if(n>=0.0 && n<=10.0)
        {
            sum+=n;
            count++;
            if(count==2)
            {
                printf("media = %.2lf\n",sum/2.0);
                sum=0;
                count=0;
                while(1)
                {
                    scanf("%d",&x);
                    if(x==1)
                    {
                        printf("novo calculo (1-sim 2-nao)\n");
                        break;
                    }
                    if(x<1 || x>2)
                    {
                        printf("novo calculo (1-sim 2-nao)\n");
                    }
                    if(x==2)
                    {
                        printf("novo calculo (1-sim 2-nao)\n");
                        return;
                    }
                }
            }
        }
    }

    return 0;
}
