#include<stdio.h>
int main()
{
    int t,i,l,r,sl,sr;
    while(1)
    {
        sl=0,sr=0;
        scanf("%d",&t);
        if(t==0)
        {
            return;
        }
        for(i=1; i<=t; i++)
        {
            scanf("%d %d",&l,&r);
            if(l>r)
            {
                sl++;
            }
            if(l<r)
            {
                sr++;
            }
        }
        printf("%d %d\n",sl,sr);
    }

    return 0;
}
