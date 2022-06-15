#include<stdio.h>
int main()
{
    int distance ;
    float fuel,averege;
    scanf("%d",&distance);
    scanf("%f",&fuel);
    averege=distance/fuel;
    printf("%.3f km/l\n",averege);
    return 0;
}
