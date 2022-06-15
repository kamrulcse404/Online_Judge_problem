#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long k,n,w,sum=0;
    cin>>k>>n>>w;
 
    for(int i=1; i<=w; i++)
    {
        sum+=(k*i);
    }
    if(sum>n)
        cout<<sum-n<<endl;
    if(sum<=n)
        cout<<n-n<<endl;
 
    return 0;
}
