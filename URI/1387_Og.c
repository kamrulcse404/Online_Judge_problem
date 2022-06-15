#include<stdio.h>
int main(void)
{
    int l,r;
    while(1)
    {
        scanf("%d %d",&l,&r);
        if(l==0 && r==0)
        {
            return;
        }
        printf("%d\n",l+r);
    }

    return 0;
}
