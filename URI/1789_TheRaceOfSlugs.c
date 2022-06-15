#include<stdio.h>
int main(void)
{
    int t,n,i,k;
    while(scanf("%d",&t)!=EOF)
    {
        k=0;
        for(i=1; i<=t; i++)
        {
            scanf("%d",&n);
            if(n>k)
            {
                k=n;
            }
        }
        if(k<10)
        {
            printf("1\n");
        }
        else if(k>=10 && k<20)
        {
            printf("2\n");
        }
        else if(k>=20)
        {
            printf("3\n");
        }
    }

    return 0;
}

