#include<stdio.h>
#include<string.h>
int main(void)
{
    int t,amount,sum,i;
    char s[20];
    while(1)
    {
        sum=0;
        scanf("%d",&t);
        if(t==0)
        {
            return;
        }
        for(i=1; i<=t; i++)
        {
            scanf("%d",&amount);
            getchar();
            gets(s);
            if(!strcmp(s,"suco de laranja"))
            {
                sum+=amount*120;
            }
            else if(!strcmp(s,"morango fresco"))
            {
                sum+=amount*85;
            }
            else if(!strcmp(s,"mamao"))
            {
                sum+=amount*85;
            }
            else if(!strcmp(s,"goiaba vermelha"))
            {
                sum+=amount*70;
            }
            else if(!strcmp(s,"manga"))
            {
                sum+=amount*56;
            }
            else if(!strcmp(s,"laranja"))
            {
                sum+=amount*50;
            }
            else if(!strcmp(s,"brocolis"))
            {
                sum+=amount*34;
            }
        }
        if(sum<110)
        {
            printf("Mais %d mg\n",110-sum);
        }
        else if(sum>130)
        {
            printf("Menos %d mg\n",sum-130);
        }
        else if(sum>=110 && sum<=130)
        {
            printf("%d mg\n",sum);
        }

    }

    return 0;
}
