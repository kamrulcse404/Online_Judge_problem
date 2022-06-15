#include<stdio.h>
int main(void)
{
    int i,n,day;
    double amount;

    scanf("%d",&n);
    while(n--)
    {
        day=0;
        scanf("%lf",&amount);
        while(1)
        {
            amount/=2.0;
            day++;
            if(amount<=1){
                break;
            }
        }
        printf("%d dias\n",day);
    }

    return 0;
}
