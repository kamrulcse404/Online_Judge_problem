#include<stdio.h>
int main()
{
    int n,yr, month,day;
    scanf("%d",&n);
    yr=n/365;
    month=((n-(yr*365))/30);
    day=(n-(yr*365))-(month*30);
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",yr,month,day);
    return 0;
}
