#include<stdio.h>
int main(void)
{
    int t,n,c,snc,sc,i;
    while(scanf("%d",&t)!=EOF)
    {
        snc=0,sc=0;
        for(i=1; i<=t; i++)
        {
            scanf("%d %d",&n,&c);
            snc+=n*c;
            sc+=c;
        }
         printf("%.4lf\n",(double)snc/((double)sc*100.0));
    }

    return 0;
}
