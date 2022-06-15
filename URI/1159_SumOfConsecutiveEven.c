#include<stdio.h>
int main()
{
    int n,i,count,sum;
    while(1)
    {
        count=0,sum=0;
        scanf("%d",&n);
        if(n==0)
        {
            break;
        }
        for(i=n; ; i++)
        {
            if(i%2==0){
                sum+=i;
                count++;
            }
            if(count==5){
                printf("%d\n",sum);
                break;
            }
        }

    }

    return 0;
}
