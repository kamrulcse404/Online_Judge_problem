#include<stdio.h>
#include<string.h>
int main(void)
{
    int t,n;
    char ch[20];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",&ch);
        scanf("%d",&n);
        if(!strcmp(ch,"Thor"))
        {
            if(n>0)
            {
                printf("Y\n");
            }
        }
        else if(strcmp(ch,"Thor"))
        {
            printf("N\n");
        }
    }
    return 0;
}
