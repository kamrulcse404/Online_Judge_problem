#include<stdio.h>
int main(void)
{
    int t;
    long long int n,y;
    double a,b=-1.0;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%llu %lf",&n,&a);
        if(a>b)
        {
            b=a;
            y=n;
        }
    }
    if(b<8.0){
        printf("Minimum note not reached\n");
    }
    else
    {
        printf("%llu\n",y);
    }

    return 0;
}
