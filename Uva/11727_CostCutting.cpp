#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int cnt = 0;
    while(t--)
    {
        cnt++;
        int a, b, c;
        cin>>a>>b>>c;
        if((a>b && a<c) || (a>c && a<b))cout<<"Case "<<cnt<<": "<<a<<endl;
        else if((b>a && b<c) || (b>c && b<a))cout<<"Case "<<cnt<<": "<<b<<endl;
        else if((c>a && c<b) || (c>b && c<a))cout<<"Case "<<cnt<<": "<<c<<endl;

    }
    return 0;
}