#include<stdio.h>
#include<string.h>
int main(void)
{
    char s[110];
    int i,ln;
    gets(s);
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
        if(s[i]!='a')
            if(s[i]!='e')
                if(s[i]!='i')
                    if(s[i]!='o')
                        if(s[i]!='u')
                            if(s[i]!='y')
                                printf(".%c",s[i]);
    }
    printf("\n");
 
 
    return 0;
}
