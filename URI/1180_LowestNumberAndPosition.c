#include<stdio.h>
int main(void)
{
    int n,i, min=5000,c;
    scanf("%d",&n);
    int x[n];
    for(i=1; i<n; i++)
    {
        scanf("%d ",&x[i]);
    }
    for(i=1; i<n; i++)
    {
        if(min>x[i])
        {
            min = x[i];
            c=i-1;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n",min,c);

    return 0;
}
