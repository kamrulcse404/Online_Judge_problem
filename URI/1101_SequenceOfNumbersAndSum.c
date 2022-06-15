#include<stdio.h>
int main()
{
    int m,n,i,sum,temp;

    while(1){
         scanf("%d%d",&m,&n);
         if(m<=0 || n<=0){
            break;
         }
         if(n<m){
            temp=m;
            m=n;
            n=temp;
         }
         sum=0;
         for(i=m;i<=n;i++){
            sum=sum+i;
            printf("%d ",i);
         }
          printf("Sum=%d\n",sum);
    }

    return 0;
}
