#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, k, p;
    cin>>n>>k;
    if(n%2 == 0)
    {
        p = n/2;
    }
    else
    {
        p = (n+1)/2;
    }
    if(k<=p)
    {
        cout<<(k*2)-1<<endl;
    }
    else
    {
        cout<<(k*2)-(p*2)<<endl;
    }


    return 0;
}
