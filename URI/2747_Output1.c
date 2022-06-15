#include<stdio.h>
int main()
{
    char ch='-',ch1='|';
    int i,j;
    for(i=1; i<=7; i++)
    {
        for(j=1; j<=39; j++)
        {
            if((i==1) || (i==7))
            {
                if(j!=39)
                {
                    printf("%c",ch);
                }
                if(j==39)
                {
                    printf("%c\n",ch);
                }
            }
            if(i>=2 && i<=6)
            {
                if(j==1)
                {
                    printf("%c",ch1);
                }
                if(j>=2 && j<=38)
                {
                    printf(" ");
                }
                if(j==39)
                {
                    printf("%c\n",ch1);
                }

            }
        }
    }

    return 0;
}
