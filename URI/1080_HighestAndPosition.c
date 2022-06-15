#include<stdio.h>
int main()
{
    int a[100],i,max=-1,p;
    for(i=0; i<100; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<100; i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            p=i+1;
        }
    }

    printf("%d\n%d\n",max,p);
    return 0;
}
