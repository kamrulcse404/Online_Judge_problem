#include<stdio.h>
int main()
{
    int n,e=0,o=0,i;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
            e++;
        else
            o++;
    }
    if(e>o)
    {
        for(i=0; i<n; i++)
        {
            if(a[i]%2!=0)
                printf("%d\n",i+1);
        }
    }
    else
    {
        for(i=0; i<n; i++)
        {
            if(a[i]%2==0)
                printf("%d\n",i+1);
        }
    }
    return 0;
}
