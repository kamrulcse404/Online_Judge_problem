#include<stdio.h>
int main(void)
{
    int n,p,j,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        p=1;
        for(j=2; j<=n/2; j++)
        {
            if((n%j)==0)
            {
                p=0;
            }
        }
        if(p==1)
        {
            printf("%d eh primo\n",n);
        }
        else
        {
            printf("%d nao eh primo\n",n);
        }
    }

    return 0;
}
