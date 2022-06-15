#include<stdio.h>
int main(void)
{
    int n,i,j,res;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=2; i<=5; i++)
    {
        res=0;
        for(j=0; j<n; j++)
        {
            if(a[j]%i==0)
            {
                res++;
            }
        }
        printf("%d Multiplo(s) de %d\n",res,i);
    }

    return 0;
}
