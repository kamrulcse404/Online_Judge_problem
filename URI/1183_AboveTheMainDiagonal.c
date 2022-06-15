#include<stdio.h>
#include<string.h>
int main(void)
{
    double a[12][12];
    double sum=0,count=0;
    int i,j;
    char ch[2];

    scanf("%s",&ch);
    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            scanf("%lf",&a[i][j]);
        }
    }

    for(i=0; i<11; i++)
    {
        for(j=i+1; j<12; j++)
        {
            sum+=a[i][j];
            count++;
        }
    }
    if(!strcmp(ch,"S"))
    {
        printf("%.1lf\n",sum);
    }
    if(!strcmp(ch,"M"))
    {
        printf("%.1lf\n",sum/count);
    }

    return 0;
}
