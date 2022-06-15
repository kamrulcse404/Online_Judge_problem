#include<stdio.h>
int main()
{

    int a,b;
    char c;
    while(scanf("%d%c%d",&a,&c,&b)!=EOF)
    {
        if(8-a==1)
        {
            printf("Atraso maximo: %d\n",b);
        }
        else if(8-a>1)
        {
            printf("Atraso maximo: 0\n");
        }
        else if(8-a<0)
        {
            printf("Atraso maximo: %d\n",(-60)*(8-a)+60);
        }
        else if(8-a==0)
        {
            printf("Atraso maximo: %d\n",60+b);
        }
    }

    return 0;
}
