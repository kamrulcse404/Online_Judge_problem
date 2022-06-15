#include<stdio.h>
#include<string.h>
int main(void)
{
    int i,sum=0;
    char ch[510];
    gets(ch);
    for(i=0; ch[i]!='\0'; i++)
    {
        sum++;
    }
    if(sum<=80)
    {
        printf("YES\n");
    }
    else if(sum>80)
    {
        printf("NO\n");
    }

    return 0;
}
