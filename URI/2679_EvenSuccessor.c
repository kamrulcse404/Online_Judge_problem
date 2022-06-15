#include<stdio.h>
int main(void)
{
    long long int x;
    scanf("%lld",&x);
    if((x+1)%2==0)
    {
        printf("%lld\n",x+1);
    }
    if((x+1)%2!=0)
    {
        printf("%lld\n",x+2);
    }


    return 0;
}
