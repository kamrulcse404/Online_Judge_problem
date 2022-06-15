#include<stdio.h>
int main(void)
{
    long long int a,b,i;
    while(scanf("%llu %llu",&a,&b)!=EOF)
    {
        i=(a-b);
        if(i<0)
        {
            i*=(-1);
        }
        printf("%llu\n",i);

    }
    return 0;
}

