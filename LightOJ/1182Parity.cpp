#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, cas = 0;
    cin>>t;
    while(t--)
    {
        cas++;
        int n;
        cin>>n;
        int cnt = 0;
        while(n/2!=0)
        {
            int tmp = n%2;
            if(tmp==1){
                cnt++;
            }
            n/=2;
            if(n==1)
            {
                cnt++;
            }
        }
        if(cnt%2==0)
        {
            cout<<"Case "<<cas<<": "<<"even"<<endl;
        }
        else
        {
            cout<<"Case "<<cas<<": "<<"odd"<<endl;
        }
    }
    return 0;
}
