#include<stdio.h>
int main(void)
{
    int t,a,b,i;
    scanf("%d",&t);
    for(i=1; i<=t; i++){
        scanf("%d%d",&a,&b);
        if(a>=0 && b>=0){
            printf("%d\n",a+b);
        }
    }

    return 0;
}
