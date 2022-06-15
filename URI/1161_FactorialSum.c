#include<stdio.h>
int main(void)
{
    long long int m,n,i,c,d,z,zn;
    while(scanf("%llu %llu",&m,&n)!=EOF)
    {
        c=1,d=1;

        if(m==0)
        {
            z=1;
        }
        if(n==0)
        {
            zn=1;
        }

        for(i=1; i<=n; i++)
        {
            c*=i;

        }

        for(i=1; i<=m; i++)
        {
            d*=i;

        }
        printf("%llu\n",c+d);
    }

    return 0;
}
