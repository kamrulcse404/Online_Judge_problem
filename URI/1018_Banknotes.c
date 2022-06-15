#include <stdio.h>
int main()
{
    int d[] = {100, 50, 20, 10, 5, 2, 1};
    int n,i;
    scanf("%d", &n);
    printf("%d\n", n);
    for(i=0;i<7;i++)
    {
        printf("%d nota(s) de R$ %d,00\n",n/d[i],d[i]);
        n-=(d[i]*(n/d[i]));
    }
        return 0;
}
