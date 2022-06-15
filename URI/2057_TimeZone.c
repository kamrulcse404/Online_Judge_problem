#include<stdio.h>
int main(void)
{
    int p,t,z,sum;
    scanf("%d %d %d",&p,&t,&z);
    if(p==0)
    {
        p=24;
        sum=p+t;
        {
            sum+=z;
            if(sum>=24)
            {
                printf("%d\n",sum-24);
            }
            else
            {
                printf("%d\n",sum);
            }
        }
        return;
    }
    sum=p+t;
    if(sum>=24)
    {
        sum-=24;
        sum+=z;
        printf("%d\n",sum);
    }
    else if(sum<24)
    {
        sum+=z;
        printf("%d\n",sum);
    }
    return 0;
}
