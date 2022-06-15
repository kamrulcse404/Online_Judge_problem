#include<stdio.h>
#include<string.h>
int main(void)
{
    double a[12][12];
    double sum=0;
    int i,j,n;
    char ch[2];

    scanf("%d",&n);
    scanf("%s",&ch);
    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            scanf("%lf",&a[i][j]);
        }
    }
    for(i=n; i==n; i++)
    {
        for(j=0; j<12; j++)
        {
            sum+=a[i][j];
        }
        if(!strcmp(ch,"S"))
        {
            printf("%.1lf\n",sum);
        }
        if(!strcmp(ch,"M"))
        {
            printf("%.1lf\n",sum/12.0);
        }
    }

    return 0;
}
