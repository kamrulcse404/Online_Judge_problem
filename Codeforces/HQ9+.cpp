#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int res = 0;
    for(int i = 0; i<s.length(); i++){
        if(s[i]=='H' || s[i] =='Q' || s[i]=='9'){
            res = 1;
            break;
        }
    }
    if(res==1){
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
