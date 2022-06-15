#include<stdio.h>
#include<string.h>
int main(void)
{
    double a[12][12];
    double sum=0,count=0;
    int i,j,k=0;
    char ch[2];

    scanf("%s",&ch);
    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            scanf("%lf",&a[i][j]);
        }
    }
    for(i=7; i<12; i++)
    {
        for(j=5-k; j<=6+k; j++)
        {
            sum+=a[i][j];
            count++;
        }
        k++;
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
