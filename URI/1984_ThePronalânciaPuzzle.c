#include<stdio.h>
int main(void)
{
    long long int n;
    int rem;
    scanf("%llu",&n);
    while(n!=0)
    {
        rem=n%10;
        printf("%d",rem);
        n=n/10;
        if(n>0 && n<10)
        {
            n*=10;
            n/=10;
            printf("%llu",n);
            break;
        }
    }
    printf("\n");
    return 0;
}
