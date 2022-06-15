#include<stdio.h>
#include<string.h>
int main(void)
{
    double a[12][12];
    double sum=0,count=0;
    int i,j,k=0,check=1;
    char ch[2];

    scanf("%s",&ch);
    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            scanf("%lf",&a[i][j]);
        }
    }


    for(i=1; i<11; i++)
    {
        if(check==1)
        {
            for(j=12-i; j<12; j++)
            {
                if(j==6)
                {
                    check=0;
                    break;
                }
                sum+=a[i][j];
                count++;
            }
        }

        if(check==0)
        {
            for(j=7+k; j<12; j++)
            {
                sum+=a[i][j];
                count++;
            }
            k++;
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
