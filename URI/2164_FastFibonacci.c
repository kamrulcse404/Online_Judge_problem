#include<stdio.h>
#include<math.h>
int main(void)
{
    int n;
    double rem1,rem2,res;
    scanf("%d",&n);
    rem1=(1.0+sqrt(5.0))/2.0;
    rem1=pow(rem1,(double)n);
    rem2=(1.0-sqrt(5.0))/2.0;
    rem2=pow(rem2,(double)n);
    res=(rem1-rem2)/sqrt(5.0);
    printf("%.1lf\n",res);
    return 0;
}
