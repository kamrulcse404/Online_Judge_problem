#include<stdio.h>
int main(void)
{
    int t,a,b,i;
    scanf("%d",&t);
    for(i=1; i<=t; i++){
        scanf("%d%d",&a,&b);
        if(a<=10 && b<=10){
            printf("Case %d: %d\n",i,a+b);
        }
    }
 
    return 0;
}
 
