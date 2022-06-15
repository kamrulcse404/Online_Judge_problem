#include<stdio.h>
int main()
{
    int num,n,coe=0,ra=0,sp=0;
    char ch;
    scanf("%d",&n);

    while(n--)
    {
        scanf("%d %c",&num,&ch);
        if(ch=='C')
        {
            coe+=num;
        }
        if(ch=='R')
        {
            ra+=num;
        }
        if(ch=='S')
        {
            sp+=num;
        }
    }
    printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\n",coe+ra+sp,coe,ra,sp);
    printf("Percentual de coelhos: %.2lf %\n",(double)((100*coe)/(double)(coe+ra+sp)));
    printf("Percentual de ratos: %.2lf %\n",(double)((100*ra)/(double)(coe+ra+sp)));
    printf("Percentual de sapos: %.2lf %\n",(double)((100*sp)/(double)(coe+ra+sp)));

    return 0;
}
