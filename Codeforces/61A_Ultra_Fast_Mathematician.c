#include<stdio.h>
#include<string.h>
 
int main()
{
    char s[110];
    char str[110];
    scanf("%s %s",&s,&str);
    int len=strlen(s);
    int i;
    for(i=0; i<len; i++)
    {
        if(s[i]!=str[i])
        {
            printf("1");
        }
        if(s[i]==str[i])
        {
            printf("0");
        }
    }
    printf("\n");
 
    return 0;
}
