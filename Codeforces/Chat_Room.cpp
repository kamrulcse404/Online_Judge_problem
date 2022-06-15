#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string a = "hello";
    int x = 0;
    for(int i=0; i<s.length(); i++)
    {
        if(x <= 5)
        {
            if(a[x] == s[i])
            {
                x++;
            }
        }
    }
    if(x == 5){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
