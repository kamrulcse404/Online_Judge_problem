#include<stdio.h>
int main()
{
    int i,g,iw,gw,d,ge,x;
    iw=gw=d=ge=0;
    while(1)
    {
        scanf("%d %d",&i,&g);
        printf("Novo grenal (1-sim 2-nao)\n");
        ge++;
        if(i>g)
        {
            iw++;
        }
        else if(i<g)
        {
            gw++;
        }
        else if(i==g)
        {
            d++;
        }
        scanf("%d",&x);
        if(x==2){
            break;
        }
    }
    printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\n",ge,iw,gw,d);
    if(iw>gw){
        printf("Inter venceu mais\n");
    }
    else if(gw>iw){
        printf("Gremio venceu mais\n");
    }
    else if(iw==gw){
        printf("Não houve vencedor\n");
    }
    return 0;
}
