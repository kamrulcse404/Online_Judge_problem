#include<stdio.h>
int main(void)
{
    int n,i,p,count,s=0;
    scanf("%d",&n);
    while(n--)
    {
        count=0;
        for(i=1; i<=3; i++)
        {
            scanf("%d",&p);
            if(p==1)
                count++;
        }
        if(count>=2)
            s++;
 
    }
    printf("%d\n",s);
 
 
    return 0;
}
