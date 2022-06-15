#include<stdio.h>
int main()
{
    int n,i,j,x,y,temp,sum;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d%d",&x,&y);
        if(y<x)
        {
            temp=y;
            y=x;
            x=temp;
        }
        sum=0;
        for(j=x+1; j<y; j++)
        {
            if(j%2!=0)
            {
                sum=sum+j;
            }
        }

            printf("%d\n",sum);
    }


    return 0;
}
