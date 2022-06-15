#include<stdio.h>
int main()
{
    int n[20],j,i=0;
    for(j=0; j<=19; j++)
    {
        scanf("%d",&n[j]);
    }
    for(j=19; j>=0; j--)
    {
        if(i==20)
        {
            break;
        }
        printf("N[%d] = %d\n",i,n[j]);
        i++;
    }
    return 0;
}
