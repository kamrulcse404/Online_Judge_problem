#include<stdio.h>
int max;
int main()
{
    int a,b,c,i;
    scanf("%d %d %d",&a,&b,&c);
    int x[6];
    x[0]=a+b+c;
    x[1]=a*b*c;
    x[2]=a+b*c;
    x[3]=(a+b)*c;
    x[4]=a*(b+c);
    x[5]=a*b+c;

    for(i=0;i<6;i++)
    {
        if(max<x[i])
        {
            max=x[i];
        }
    }
    printf("%d\n",max);

    return 0;
}
