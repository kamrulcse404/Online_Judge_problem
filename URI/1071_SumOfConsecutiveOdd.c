#include<stdio.h>
int main()
{
    int a,b,i,temp,sum=0;
    scanf("%d%d",&a,&b);
    if(a>b){
        temp=b;
        b=a;
        a=temp;
    }
    for(i=a+1;i<b;i++){
        if(i%2!=0){
            sum=sum+i;
        }
    }
    printf("%d\n",sum);

    return 0;
}
