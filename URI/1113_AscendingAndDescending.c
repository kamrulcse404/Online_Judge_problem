#include<stdio.h>
int main()
{
    int i,x,y,temp;
    while(1){
        scanf("%d%d",&x,&y);
        if(x==y){
            break;
        }
        if(x>y){
            printf("Decrescente\n");
        }
        if(y>x){
            printf("Crescente\n");
        }
    }

    return 0;
}
