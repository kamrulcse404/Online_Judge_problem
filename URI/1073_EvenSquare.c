#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        i++;
        printf("%d^2 = %d\n",i,i*i);

    }

    return 0;
}
