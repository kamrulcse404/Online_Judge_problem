#include<stdio.h>
int main(void)
{
    long long int i,n,sum=0,a=0;
    scanf("%llu",&n);
    for(i=3; i<=n; i++)
    {
        a++;
        sum+=a;
    }
    printf("%llu\n",sum-1);
    return 0;
}
