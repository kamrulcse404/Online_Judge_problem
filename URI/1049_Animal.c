#include<stdio.h>
#include<string.h>

int main(void)
{
    char a[20];
    char b[20];
    char c[20];
    gets(a);
    gets(b);
    gets(c);
    if(!strcmp(a,"vertebrado"))
    {
        if(!strcmp(b,"ave"))
        {
            if(!strcmp(c,"carnivoro"))
            {
                printf("aguia\n");
            }
            else if(!strcmp(c,"onivoro"))
            {
                printf("pomba\n");
            }
        }
        else if(!strcmp(b,"mamifero"))
        {
            if(!strcmp(c,"onivoro"))
            {
                printf("homem\n");
            }
            else if(!strcmp(c,"herbivoro"))
            {
                printf("vaca\n");
            }
        }
    }
    else if(!strcmp(a,"invertebrado"))
    {
        if(!strcmp(b,"inseto"))
        {
            if(!strcmp(c,"hematofago"))
            {
                printf("pulga\n");
            }
            else if(!strcmp(c,"herbivoro"))
            {
                printf("lagarta\n");
            }
        }
        else if(!strcmp(b,"anelideo"))
        {
            if(!strcmp(c,"hematofago"))
            {
                printf("sanguessuga\n");
            }
            else if(!strcmp(c,"onivoro"))
            {
                printf("minhoca\n");
            }
        }
    }


    return 0;
}

