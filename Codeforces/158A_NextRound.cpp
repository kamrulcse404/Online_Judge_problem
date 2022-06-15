#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,temp,count=0;
    cin>>n>>p;
    int a[n];
    int c=0;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        if(i==p)temp=a[i];
    }
    for(int i=1; i<=n; i++)
    {
        if(temp>0)
        {
            if(a[i]>=temp)
                count++;
        }
        else if(temp==0)
        {
            if(a[i]>temp)
                count++;
        }
        else if(temp==0 && a[i]==0)
        {
            c=1;
        }
    }
    if(c==1)
    {
        cout<<"0"<<endl;
    }
    if(c==0)
    {
        cout<<count<<endl;
    }
 
    return 0;
}
