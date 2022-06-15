#include<stdio.h>
int main()
{
    int i,count=0;
    double n,sum=0;
    for(i=0; i<6; i++)
    {
        scanf("%lf",&n);
        if(n>0)
        {
            sum=sum+n;
            count++;
        }
    }
    printf("%d valores positivos\n",count);
    printf("%0.1lf\n",sum/(double)count);
    return 0;
}
