#include<stdio.h>
int main()
{
    int x,y,i;
    int a=1,count=0;
    scanf("%d%d",&x,&y);
    for(i=1; i<=y; i++)
    {
        printf("%d",a);
        count++;
        a++;
        if(count!=x)
        {
            printf(" ");
        }
        if(count==x)
        {
            printf("\n");
            count=0;
        }
    }

    return 0;
}
