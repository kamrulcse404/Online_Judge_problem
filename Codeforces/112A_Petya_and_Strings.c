#include<stdio.h>
#include<string.h>
int main()
{
    char s[110];
    char ss[110];
    int ln,i,count=0,t;
    gets(s);
    gets(ss);
    ln=strlen(s);
 
    for(i=0; i<ln; i++)
    {
        if(s[i]>=65 && s[i]<=92)
        {
            s[i]=s[i]+32;
        }
    }
    for(i=0; i<ln; i++)
    {
        if(ss[i]>=65 && ss[i]<=92)
        {
            ss[i]=ss[i]+32;
        }
    }
    for(i=0; i<ln; i++)
    {
        if((s[i]!=ss[i]))
        {
            break;
        }
        count++;
    }
    if(count==ln)
    {
        printf("0\n");
    }
    else if(s[count]<ss[count])
    {
        printf("-1\n");
    }
    else if(s[count]>ss[count])
    {
        printf("1\n");
    }
 
    return 0;
}
