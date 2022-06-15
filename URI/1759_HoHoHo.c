#include<stdio.h>
int main(void)
{
    int i,n;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        if(i==n)
        {
            break;
        }
        printf("Ho ");
    }
    printf("Ho!\n");

    return 0;
}
