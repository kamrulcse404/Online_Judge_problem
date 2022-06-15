#include<stdio.h>
int main(void)
{
    int n,i,p,count;
    double temp;
    while(scanf("%d",&n)!=EOF)
    {
        count=0;
        for(i=1; i<=n; i++)
        {
            scanf("%d",&p);
            if(p==1)
            {
                count++;
            }
        }
        temp=n/3.0;
        temp*=2.0;
        if(count>=temp)
        {
            printf("impeachment\n");
        }
        if(count<temp)
        {
            printf("acusacao arquivada\n");
        }
    }


    return 0;
}
