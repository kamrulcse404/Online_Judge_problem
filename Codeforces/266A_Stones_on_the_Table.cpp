#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char s[n];
    cin>>s;
    int count=0;
    for(int i=0; i<strlen(s)-1; i++)
    {
        if(s[i]==s[i+1])
        {
            count++;
        }
    }
    cout<<count<<endl;
 
    return 0;
}