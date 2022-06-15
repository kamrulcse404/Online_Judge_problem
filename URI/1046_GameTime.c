#include<stdio.h>
int main()
{
    int a,b,x,y;
    scanf("%d%d",&a,&b);
    if(a>b){
        x=24-a;
        y=x+b;
        printf("O JOGO DUROU %d HORA(S)\n",y);
    }
    if(a==b){
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
     if(a<b){
        x=b-a;
        printf("O JOGO DUROU %d HORA(S)\n",x);
    }

    return 0;
}
