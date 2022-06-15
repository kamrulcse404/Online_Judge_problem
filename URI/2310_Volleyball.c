#include<stdio.h>
int main(void)
{
    int n,sa,ba,aa,ss,sb,sfa;
    int rsa=0,rba=0,raa=0,rss=0,rsb=0,rsfa=0;
    char name[20];
    char p='%',q='.';
    scanf("%d\n",&n);
    while(n--)
    {
        scanf("%s",name);
        scanf("%d %d %d",&sa,&ba,&aa);
        scanf("%d %d %d",&ss,&sb,&sfa);
        rsa = rsa+sa;
        rba = rba+ba;
        raa = raa+aa;
        rss = rss+ss;
        rsb = rsb+sb;
        rsfa = rsfa+sfa;
    }
    printf("Pontos de Saque: %.2lf %c%c\n",((double)rss/(double)rsa)*100.0,p,q);
    printf("Pontos de Bloqueio: %.2lf %c%c\n",((double)rsb/(double)rba)*100.0,p,q);
    printf("Pontos de Ataque: %.2lf %c%c\n",((double)rsfa/(double)raa)*100.0,p,q);
    return 0;
}
