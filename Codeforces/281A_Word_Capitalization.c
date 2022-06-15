#include<stdio.h>
#include<string.h>
int main()
{
    char str[1002];
    int i=0;
    gets(str);
    if(str[i]>=97 && str[i]<=122)
    {
        str[i]=str[i]-32;
    }
    printf("%s\n",str);
 
    return 0;
}
