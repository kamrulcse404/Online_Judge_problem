#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin>>n;

    char s[n];
    scanf("%s",s);
    int a=0, d=0;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='A')a++;
        else if(s[i]=='D')d++;
    }
    if(a==d)
        cout<<"Friendship"<<endl;
    else if(a>d)
        cout<<"Anton"<<endl;
    else if(a<d)
        cout<<"Danik"<<endl;
    return 0;
}
