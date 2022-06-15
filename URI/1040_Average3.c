#include<stdio.h>
int main()
{
    double n1,n2,n3,n4,n5,x,y;
    scanf("%lf%lf%lf%lf",&n1,&n2,&n3,&n4);
    x=(n1*2+n2*3+n3*4+n4*1)/10;
    printf("Media: %.1lf\n",x);
    if(x>=7.0){
        printf("Aluno aprovado.\n");
    }
    if(x<5.0){
        printf("Aluno reprovado.\n");
    }
    if(x>=5.0 && x<=6.9){
        printf("Aluno em exame.\n");
        scanf("%lf",&n5);
        printf("Nota do exame: %.1lf\n",n5);
        y=(x+n5)/2;
        if(y>=5.0){
            printf("Aluno aprovado.\n");
            printf("Media final: %.1lf\n",y);
        }
        if(y<=4.9){
            printf("Aluno reprovado.\n");
            printf("Media final: %.1lf\n",y);
        }
    }

    return 0;
}
