#include<stdio.h>
#include<string.h>
int main()
{
    char s[101];
    int i,l,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",s);
        l=strlen(s);
        if(l<=10)
            printf("%s\n",s);
        else if(l>10)
            printf("%c%d%c\n",s[0],l-2,s[l-1]);
    }
    return 0;
}
