#include<stdio.h>
int main()
{
    int n;
    double x ,y;
    scanf("%d",&n);
    while(n--){
        scanf("%lf%lf",&x,&y);
        if(y==0){
            printf("divisao impossivel\n");
        }
       if(y!=0){
         printf("%.1lf\n",x/y);
       }
    }

    return 0;
}
