#include<stdio.h>
int main(void)
{
    unsigned long int pa,pb;
    int t,count;
    double ga,gb;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lu %lu %lf %lf",&pa,&pb,&ga,&gb);
        count=0;
        while(pa<=pb)
        {
            pa=pa+((ga*pa)/100);
            pb=pb+((gb*pb)/100);
            count++;
            if(count>100)
            {
                printf("Mais de 1 seculo.\n");
                break;
            }
        }
        if(count<=100)
        {
            printf("%d anos.\n",count);
        }
    }

    return 0;
}
