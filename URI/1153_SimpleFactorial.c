#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    fact(n);
      printf("%d\n",fact(n));

    return 0;
}

 int fact(int n)
 {
     if(n==2){
        return 2;
     }
     if(n>2){
        return n*fact(n-1);
     }
 }
