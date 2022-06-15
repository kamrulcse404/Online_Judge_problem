#include<stdio.h>
int main(void)
{
    int n,p,r;
    double sum=0;

    scanf("%d",&n);
    while(n--)
    {
        scanf("%d %d",&p,&r);
        if(p==1001)
        {
            sum+=r*1.50;
        }
        if(p==1002)
        {
            sum+=r*2.50;
        }
        if(p==1003)
        {
            sum+=r*3.50;
        }
        if(p==1004)
        {
            sum+=r*4.50;
        }
        if(p==1005)
        {
            sum+=r*5.50;
        }
    }
    printf("%.2lf\n",sum);

    return 0;
}
