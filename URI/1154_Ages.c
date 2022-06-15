#include<stdio.h>
int main()
{
    int n,sum=0,count=0;
    double av;
    while(1)
    {
        scanf("%d",&n);
        if(n<0)
        {
            break;
        }
        else
        {
            count++;
            sum+=n;
        }
    }
    av=sum/(count*1.0);
    printf("%.2lf\n",av);

    return 0;
}
