#include<stdio.h>
int main()
{
    int a,n,i,sum,count;
    scanf("%d%d",&a,&n);
    if(n<=0)
    {
        sum=0,count=0;
        while(1)
        {
            scanf("%d",&n);
            if(n>0)
            {
                for(i=a; ; i++)
                {
                    sum=sum+i;
                    count++;
                    if(count==n)
                    {
                        printf("%d\n",sum);
                        return;
                    }
                }
            }
        }
    }
    else
    {
        sum=0,count=0;
        for(i=a; ; i++)
        {
            sum=sum+i;
            count++;
            if(count==n)
            {
                printf("%d\n",sum);
                break;
            }
        }
    }
    return 0;
}
