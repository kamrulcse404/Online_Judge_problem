#include<stdio.h>
#include<string.h>

int main(void)
{
    int t,i,len,count;
    double a=0.09,x;
    char ch[10010];
    scanf("%d\n",&t);
    while(t--)
    {
        gets(ch);
        len=strlen(ch);
        count=0;
        for(i=0; i<len; i++)
        {
            if(ch[i]=='e')
            {
                count++;
            }
        }
        if(count==1)
        {
            printf("%.2lf\n",a);
        }
        else if(count>1)
        {
            count=count-1;
            x=(double)count * 0.01 + a;
            printf("%.2lf\n",x);
        }

    }

    return 0;
}
