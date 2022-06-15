#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int res = n/2;
        cout<<res<<" "<<n-res<<endl;
    }
    return 0;
}

