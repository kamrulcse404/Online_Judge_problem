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
    if(sum<=140)
    {
        printf("TWEET\n");
    }
    else if(sum>140)
    {
        printf("MUTE\n");
    }

    return 0;
}
