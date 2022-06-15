#include<stdio.h>
int main()
{
    int i,n,x,y,j=1;
    scanf("%d",&n);
    for(i=1; i<=10000; i++)
    {
        if(j==1){
            printf("2\n");
            j=-1;
        }
        if(i%n==0)
        {
            x=i+2;
            if(x<10000)
            {
                printf("%d\n",x);
            }
        }
    }

    return 0;
}
