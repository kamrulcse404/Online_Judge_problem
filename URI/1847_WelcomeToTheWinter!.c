#include<stdio.h>
int main(void)
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    if(a>b && (b<c || b==c))
    {
        printf(":)\n");
    }
    else if(a<b && (b>c || b==c))
    {
        printf(":(\n");
    }
    else if(a<b && b<c && ((b-a)>(c-b)))
    {
        printf(":(\n");
    }
    else if(a<b && b<c && ((b-a)<(c-b) || (b-a)==(c-b)))
    {
        printf(":)\n");
    }
    else if(a>b && b>c && ((a-b)>(b-c)))
    {
        printf(":)\n");
    }
    else if(a>b && b>c && ((a-b)<(b-c) || (a-b)==(b-c)))
    {
        printf(":(\n");
    }
    else if(a==b && b<c)
    {
        printf(":)\n");
    }

    else if(a==b && b>=c)
    {
        printf(":(\n");
    }


    return 0;
}
