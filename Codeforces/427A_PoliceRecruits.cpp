#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int un=0,h=0,sum=0;
    cin>>t;
    for (int i=1; i<=t; i++)
    {
        int n;
        cin>>n;
        if(n<0)
        {
            un++;
            if(h>0)
            {
                h-=un;
                un--;
            }
            sum+=un;
            un=0;
        }
        else if(n>0)
        {
            h+=n;
        }
    }
    cout<<sum<<endl;

    return 0;
}
