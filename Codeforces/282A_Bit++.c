#include<stdio.h>
#include<string.h>
 
int main()
{
 
    int n,sum=0,i;
    char s[100];
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%s",&s);
        if(!strcmp("X++",s))sum++;
        if(!strcmp("++X",s))++sum;
        if(!strcmp("X--",s))sum--;
        if(!strcmp("--X",s))--sum;
    }
    printf("%d\n",sum);
 
    return 0;
}
 
