#include<stdio.h>
int main()
{
   int a,b,c,d,e,f,temp;
   scanf("%d%d%d",&a,&b,&c);
   d=a,e=b,f=c;

   if(d>e){
    temp=e;
    e=d;
    d=temp;
   }
   if(d>f){
    temp=f;
    f=d;
    d=temp;
   }
   if(e>f){
    temp=f;
    f=e;
    e=temp;
   }
   printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",d,e,f,a,b,c);

    return 0;
}
