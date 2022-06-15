#include<stdio.h>
int main()
{
    int i,j,n,a=1,b=1,aa=0;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
         b=i*a;
        for(j=1; j<=2; j++)
        {
            printf("%d %d %d\n",i,a,b);
            a=a+1;
            b=b+1;
        }
         aa=aa+2;
        a=a+aa-1;
    }
    return 0;
}
