#include<stdio.h>
int main(void)
{
    char ch[28];
    int n,i,l;
    while(scanf("%s",&ch)!=EOF)
    {
        scanf("%d",&n);
        for(i=0; i<n; i++)
        {
            scanf("%d",&l);
            printf("%c",ch[l-1]);
        }
        printf("\n");
    }

    return 0;
}
