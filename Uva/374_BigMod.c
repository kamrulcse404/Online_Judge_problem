#include<stdio.h>


long long int mod(long long int b,long long int p,long long int m)
{

    if(p==0)return 1;
    long long int x = mod(b, p/2, m);
    x = (x*x)%m;
    if(p%2!=0)
    {
        x = (x*b)%m;
    }
    return x;
}


int main()
{
    long long int b, p, m;
    while(scanf("%lld %lld %lld",&b,&p,&m)==3)
    {
        printf("%lld\n",mod(b,p,m));
    }

    return 0;
}