#include<bits/stdc++.h>
using namespace std;
int main()
{
    int lp,tp,n;
    int count=0;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>lp>>tp;
        if(tp-lp>=2)
        {
            count++;
        }
    }
    cout<<count<<endl;
 
    return 0;
}
