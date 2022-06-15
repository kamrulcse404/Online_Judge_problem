#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        n*=567; n/=9; n+=7492; n*=235; n/=47; n-=498;
        int res = n/10;
        res = res%10;
        printf("%d\n",abs(res));
    }
    return 0;
}