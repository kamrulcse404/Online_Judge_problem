#include<stdio.h>
int main()
{
    long long int sum,n,m;
    int t,i=0;
    scanf("%d",&t);
    while(t--)
    {
        i++;
        scanf("%lld %lld",&n,&m);
        sum=(m*n)/2;
        printf("Case %d: %lld\n",i,sum);
    }
 
    return 0;
}
 
