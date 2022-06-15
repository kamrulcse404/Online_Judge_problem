#include<stdio.h>
int main()
{
    int i;
    double N[100];
    double x;
    scanf("%lf",&x);
    for(i=0; i<=99; i++){
        printf("N[%d] = %.4lf\n",i,x);
        x=x/2.0;
    }

    return 0;
}
