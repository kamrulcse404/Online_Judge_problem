#include<stdio.h>
int main()
{
    int n,hours,enough, min ,sec;
    scanf("%d",&n);
    hours=n/3600;
    enough=n-(hours*3600);
    min=enough/60;
    sec=enough-(min*60);
    printf("%d:%d:%d\n",hours,min,sec);

    return 0;
}
