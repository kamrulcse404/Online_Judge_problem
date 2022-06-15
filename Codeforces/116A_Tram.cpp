#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,in=0,tmp=0;
    cin>>t;

    while(t--)
    {
        int i,j;
        cin>>i>>j;
        in = in - i + j;
        if(in>tmp)
        {
            tmp=in;
        }
    }
    cout<<tmp<<endl;
    return 0;
}
