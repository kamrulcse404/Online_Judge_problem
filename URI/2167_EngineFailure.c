#include<stdio.h>
int main(void)
{
    int a[102];
    int i,t,n,temp=-1,count=0;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<t; i++)
    {
        if(a[i]>=temp)
        {
            count++;
            temp=a[i];
        }
        if(a[i]<temp)
        {
            break;
        }
    }
    if(count==t)
    {
       printf("%d\n",0);
    }
    else
    {
        printf("%d\n",count+1);
    }

    return 0;
}
