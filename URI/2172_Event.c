#include<stdio.h>

int main(void)
{
    int n;
    long long int ex,res;
    while(1)
    {
        scanf("%d %llu",&n,&ex);
        if(n==0 && ex==0){
            return ;
        }
        res=n*ex;
        printf("%llu\n",res);
    }

    return 0;
}
