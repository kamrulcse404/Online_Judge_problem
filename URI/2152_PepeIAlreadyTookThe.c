#include<stdio.h>
int main(void)
{
    int t,h,m,o;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d",&h,&m,&o);
        if(o==0)
        {
            if(h<10 && m<10)
            {
                printf("0%d:0%d - A porta fechou!\n",h,m);
            }
            else if(h<10 && m>9)
            {
                printf("0%d:%d - A porta fechou!\n",h,m);
            }
            else if(h>9 && m<10)
            {
                printf("%d:0%d - A porta fechou!\n",h,m);
            }
            else if(h>9 && m>9)
            {
                printf("%d:%d - A porta fechou!\n",h,m);
            }
        }
        if(o!=0)
        {
            if(h<10 && m<10)
            {
                printf("0%d:0%d - A porta abriu!\n",h,m);
            }
            else if(h<10 && m>9)
            {
                printf("0%d:%d - A porta abriu!\n",h,m);
            }
            else if(h>9 && m<10)
            {
                printf("%d:0%d - A porta abriu!\n",h,m);
            }
            else if(h>9 && m>9)
            {
                printf("%d:%d - A porta abriu!\n",h,m);
            }
        }
    }

    return 0;
}
