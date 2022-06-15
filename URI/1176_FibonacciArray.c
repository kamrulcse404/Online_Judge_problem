#include<stdio.h>
int main(void)
{
    int n,x,i,count;
    long long int a,b,sum=0;

    scanf("%d",&n);
    while(n--)
    {
        count=0, a=0,b=1;
        scanf("%d",&x);
        if(x>=2)
        {
            for(i=0; ; i++)
            {
                count++;
                if(count==x)
                {
                    break;
                }
                sum=a+b;
                a=b,b=sum;
            }
             printf("Fib(%d) = %llu\n",x,b);
        }
        if(x<2)
        {
            if(x==0)
            {
                printf("Fib(%d) = %llu\n",x,a);
            }
            if(x==1)
            {
                printf("Fib(%d) = %llu\n",x,b);
            }
        }
    }

    return 0;
}
