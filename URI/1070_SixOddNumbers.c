#include<stdio.h>
int main()
{
    int i,n,count=0;
    scanf("%d",&n);
    for(i=n; ; i++)
    {
        if(i%2!=0)
        {
            count++;
            printf("%d\n",i);
            while(count==6)
            {
                return;
            }
        }

    }

    return 0;
}
