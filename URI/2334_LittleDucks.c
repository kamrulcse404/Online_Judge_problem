#include<stdio.h>
int main(void)
{
    unsigned long long n;
    while(1)
    {
        scanf("%llu",&n);
        if(n==-1){
            return;
        }
        else if(n==0){
            printf("%llu\n",n);
        }
        else if(n>0){
            printf("%llu\n",n-1);
        }
    }

    return 0;
}
