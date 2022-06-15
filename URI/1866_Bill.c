#include<stdio.h>
int main(void)
{
    int t,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        if(n%2==0){
            printf("%d\n",0);
        }
         if(n%2!=0){
            printf("%d\n",1);
        }
    }

    return 0;
}
