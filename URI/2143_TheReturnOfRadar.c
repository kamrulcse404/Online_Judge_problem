#include<stdio.h>
int main(void)
{
    int t,i,n;
    while(scanf("%d",&t))
    {
        if(t==0)
        {
            return;
        }
        for(i=1; i<=t; i++)
        {
            scanf("%d",&n);
            if(n%2!=0)
            {
                printf("%d\n",n*2-1);
            }
            if(n%2==0)
            {
                printf("%d\n",n*2-2);
            }
        }
    }


    return 0;
}
