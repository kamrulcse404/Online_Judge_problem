#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,temp,tm;
    cin>>n;
    if(n%2!=0)
    {
        temp=n+1;
        temp=temp/2;
        temp*=-1;
        cout<<temp<<endl;
    }
    if(n%2==0)
    {
        tm=n/2;
        cout<<tm<<endl;
    }
    return 0;
}
