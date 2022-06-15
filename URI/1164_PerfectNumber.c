#include<stdio.h>
int main()
{
    int t,n,i,sum;
    scanf("%d",&t);
    while(t--)
    {
        sum=0;
        scanf("%d",&n);
        for(i=1; i<n; i++)
        {
            if(n%i==0)
            {
                sum=sum+i;
            }
        }
        if(sum==n)
        {
            printf("%d eh perfeito\n",n);
        }
        if(sum!=n)
        {
            printf("%d nao eh perfeito\n",n);
        }
    }

    return 0;
}
