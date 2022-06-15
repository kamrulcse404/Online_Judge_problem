#include<stdio.h>
int main(void)
{
    double array[7];
    double temp,div,sum;
    int i,j,t;
    char ch[20];
    scanf("%d",&t);
    while(t--)
    {
        sum=0.0;
        scanf("%s",&ch);
        scanf("%lf",&div);
        for(i=0; i<7; i++)
        {
            scanf("%lf",&array[i]);
        }
        for(i=0; i<7-1; i++)
        {
            for(j=i+1; j<7; j++)
            {
                if(array[i]>array[j])
                {
                    temp=array[i];
                    array[i]=array[j];
                    array[j]=temp;
                }
            }
        }
        for(i=1; i<=5; i++)
        {
            sum+=array[i];
        }
        printf("%s %.2lf\n",ch,sum*div);
    }

    return 0;
}
