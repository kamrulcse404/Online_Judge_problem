#include<stdio.h>
int main()
{
    int time ,distance ;
    double fuel,s_time;

    scanf("%d%d",&time,&distance);

    s_time=distance/12.0;
    fuel=s_time*time;

    printf("%.3lf\n",fuel);

    return 0;
}
