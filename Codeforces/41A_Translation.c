#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char st[110];
    char str[110];
 
    scanf("%s %s",&st,&str);
    strrev(str);
 
    if(!strcmp(st,str))
    {
        printf("YES\n");
    }
    if(strcmp(st,str))
    {
       printf("NO\n");
    }
 
    return 0;
}
