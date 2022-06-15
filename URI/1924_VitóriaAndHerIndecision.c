#include<stdio.h>
#include<string.h>
int main(void)
{
    int n,check=0;
    char ich[100];
    char ch[]="Ciencia da Computacao";
    scanf("%d\n",&n);
    while(n--)
    {
        gets(ich);
        if(!strcmp(ich,ch))
        {
            check=1;
        }
    }
    if(check==1 || check==0)
    {
        printf("Ciencia da Computacao\n");
    }
    return 0;
}
