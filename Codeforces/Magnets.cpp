#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, res = 1;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n-1; i++)
    {
        if(arr[i] != arr[i+1])
        {
            res++;
        }
    }
    cout<<res<<endl;
    return 0;
}

