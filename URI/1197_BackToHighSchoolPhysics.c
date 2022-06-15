#include<stdio.h>
int main(void)
{
    int v,t,r;
    while(scanf("%d %d",&v,&t)!=EOF)
    {
        r=(v*t)*2;
        printf("%d\n",r);
    }

    return 0;
}
