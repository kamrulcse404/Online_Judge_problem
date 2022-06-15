#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[110];
    cin>>s;
    for(int i=0; i<strlen(s); i+=2)
    {
        int x=s[i];
        int j=i-2;
        while(j>=0 && s[j]>x)
        {
            s[j+2]=s[j];
            j-=2;
        }
        s[j+2]=x;
    }
    cout<<s<<endl;
 
    return 0;
}
