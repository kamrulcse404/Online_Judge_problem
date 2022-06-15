#include<stdio.h>
int main()
{
    double num,count=0,sum=0;
    while(1){
        scanf("%lf",&num);
        if(num<0.0 || num>10.0){
            printf("nota invalida\n");
        }
        if(num>=0.0 && num<=10.0){
                sum=sum+num;
            count++;
            if(count==2){
                printf("media = %.2lf\n",sum/2.0);
                break;
            }
        }
    }
    return 0;
}
