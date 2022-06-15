#include<stdio.h>
#include<math.h>

int main()
{
   long long int n;
   double sum,ans;
   scanf("%lld",&n);
   sum=(double)n/(double)(log(n));
   ans=sum*1.25506;
   printf("%.1lf %.1lf\n",sum,ans);

    return 0;
}
