#include<stdio.h>
int main(void)
{
    int ih,im,fh,fm;
    scanf("%d %d %d %d",&ih,&im,&fh,&fm);
    if(ih==fh && im==fm)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
     else if((fm==im && fh>ih) || (fm>im && fh==ih))
    {
         printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",fh-ih,fm-im);
    }

    else if(fm>im && fh>ih)
    {
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",fh-ih,fm-im);
    }

    else if(fm<im)
    {
        fm=fm+60-im;
        fh-=1;
        if(fh<ih)
        {
            fh+=24;
            fh-=ih;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",fh,fm);
        }
        else if(fh>=ih)
        {
            fh-=ih;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",fh,fm);
        }
    }

    else if(fm>=im)
    {
        fm-=im;
        if(fh<ih)
        {
            fh=fh+24-ih;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",fh,fm);
        }
    }
    return 0;
}
