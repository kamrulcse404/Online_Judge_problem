#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, h, res=0, p;
    cin>>n>>h;
    for(int i=0; i<n; i++)
    {
        cin>>p;
        if(p<=h)res++;
        if(p>h){
            int tmp;
            tmp = p/h;
            res = res + 2;
        }
    }
    cout<<res<<endl;
    return 0;
}
