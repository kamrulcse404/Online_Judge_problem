#include<stdio.h>
int main()
{
    int i,sum=0;
    double number;
    for(i=1; i<=6; i++)
    {
        scanf("%lf",&number);
        if(number>0)
        {
            sum++;
        }
    }
      printf("%d valores positivos\n",sum);
    return 0;
}
