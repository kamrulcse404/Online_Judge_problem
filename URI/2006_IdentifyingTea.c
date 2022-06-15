#include<stdio.h>
int main(void)
{
    int a[5];
    int i,j,n,f=0;

    scanf("%d",&n);
    for(i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
    }

    for(j=0; j<5; j++)
    {
        if(a[j]==n)
        {
            f++;
        }
    }
    printf("%d\n",f);

    return 0;
}
