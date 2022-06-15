#include<stdio.h>
int main()
{
    int x,z,i,count=0,sum=0;
    scanf("%d%d",&x,&z);
    if(z<=x)
    {
        while(1)
        {
            scanf("%d",&z);
            if(z>x)
            {
                break;
            }
        }
    }
    for(i=x; ; i++)
    {
        sum+=i;
        count++;
        if(sum>z)
        {
            printf("%d\n",count);
            break;
        }
    }
    return 0;
}
