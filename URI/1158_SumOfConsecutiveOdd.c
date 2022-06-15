#include<stdio.h>
int main()
{
    int n,i,j,x,y,count,sum;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        sum=0,count=0;
        scanf("%d%d",&x,&y);
        for(j=x; ; j++)
        {
            if(j%2!=0)
            {
                sum=sum+j;
                count++;
            }
            if(y==count){
                printf("%d\n",sum);
                break;
            }
        }
    }

    return 0;
}
