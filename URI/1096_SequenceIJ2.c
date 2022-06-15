#include<stdio.h>
int main()
{
    int i,j,n;
    for(i=1; i<=9; i+=2)
    {
        n=8;
        for(j=1; j<=3; j++)
        {
             n-=1;
            printf("I=%d J=%d\n",i,n);

        }
    }

    return 0;
}
