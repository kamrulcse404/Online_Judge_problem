#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,cnt = 0;
    cin>>t;
    while(t--)
    {
        int n, dust,sum = 0;
        cin>>n;
        for(int i=1; i<=n; i++)
        {
            cin>>dust;
            if(dust>0)sum+=dust;
        }
        cnt++;
        printf("Case %d: %d\n",cnt,sum);
    }

    return 0;
}

 
