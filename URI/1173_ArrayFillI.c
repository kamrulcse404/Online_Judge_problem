#include<stdio.h>
int main()
{
    int n[10],i,num,in=0;
    scanf("%d",&num);
    for(i=0;i<10;i++)
    {
       printf("N[%d] = %d\n",in,num);
       num+=num;
       in++;
    }

    return 0;
}
