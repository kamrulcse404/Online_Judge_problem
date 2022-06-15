#include<bits/stdc++.h>
#include<string.h>
 
using namespace std;
int main()
{
    char s[110];
    cin>>s;
    int len=strlen(s);
    int temp=len/2;
    int coun=0,tr;
    if(len%2!=0)
        temp++;
    for(int i=0; i<len; i++)
    {
        if(s[i]>=65 && s[i]<=90)
        {
            coun++;
        }
    }
    tr=len-coun;
    if(tr>=temp)
    {
        for(int i=0; i<len; i++)
        {
            if(s[i]>=65 && s[i]<=90)
            {
                s[i]=s[i]+32;
            }
        }
        cout<<s<<endl;
    }
    if(tr<temp)
    {
        for(int i=0; i<len; i++)
        {
            if(s[i]>=97 && s[i]<=122)
            {
                s[i]=s[i]-32;
            }
        }
        cout<<s<<endl;
    }
 
    return 0;
}
