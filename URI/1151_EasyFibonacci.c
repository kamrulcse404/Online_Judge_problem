#include<stdio.h>
int main()
{
    int a=0,b=1,i,count=2,t=0,c,n;
    scanf("%d",&n);
    for(i=3; i<=n; i++)
    {
        count++;
        if(t==0)
        {
            printf("%d %d ",a,b);
            t=1;
        }
        c=a+b;
        if(count!=n)
        {
            printf("%d ",c);
        }
        if(count==n)
        {
            printf("%d\n",c);
        }
         a=b;
        b=c;
    }

    return 0;
}
