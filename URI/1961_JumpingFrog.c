#include<stdio.h>
int main(void)
{
    int j,p,i,res,c=0;
    scanf("%d %d",&j,&p);
    int a[p];
    for(i=0; i<p; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<p-1; i++)
    {
        res=a[i]-a[i+1];
        if(res<0)
        {
            res*=(-1);
        }
        if(res>j)
        {
            c=-1;
        }
    }
    if(c==0)
    {
        printf("YOU WIN\n");
    }
    else if(c=-1)
    {
        printf("GAME OVER\n");
    }

    return 0;
}
