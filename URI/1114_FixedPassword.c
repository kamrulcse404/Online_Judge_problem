#include<stdio.h>
int main()
{
    int num=2002,n;
    while(1){
        scanf("%d",&n);
        if(num!=n){
            printf("Senha Invalida\n");
        }
        if(num==n){
            printf("Acesso Permitido\n");
            break;
        }
    }

    return 0;
}
