#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, age;
    int a[101];

    while(1)
    {
        int c=0;
        memset(a, 0, sizeof(a));
        cin>>t;
        if(t==0)
        {
            return 0;
        }
        for(int i=1; i<=t; i++)
        {
            cin>>age;
            a[age]++;
        }

        for(int i=1; i<101; i++)
        {
            for(int j=1; j<=a[i]; j++)
            {
                c++;
                if(c!=t)cout<<i<<" ";
                else cout<<i;
            }
        }
        cout<<endl;
    }
    return 0;
}