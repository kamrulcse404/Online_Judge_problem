#include<bits/stdc++.h>
#include<string>
 
using namespace std;
int main()
{
    char s[101];
    cin>>s;
    int count=0;
    int len=strlen(s);
    for(int i=0; i<len-1; i++)
    {
        if(s[i]==s[i+1])
        {
            count++;
        }
        if(s[i]!=s[i+1])
        {
            if(count>=6)
               break;
            else
                count=0;
        }
    }
 
    if(count>=6)
        cout<<"YES"<<endl;
    if(count<6)
        cout<<"NO"<<endl;
    return 0;
}
