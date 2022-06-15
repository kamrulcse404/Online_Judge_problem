#include<bits/stdc++.h>
#include<stack>
#include<string.h>
using namespace std;
int main()
{
    int t;
    char s[130];
    scanf("%d",&t);
    getchar();
    stack<char> mystack;
    while(t--)
    {
        gets(s);
        int len = strlen(s);

        for(int i=0; i<len; i++)
        {
            if(!(mystack.empty()) && mystack.top()=='(' && s[i]==')')
            {
                mystack.pop();
            }
            else if(!(mystack.empty()) && mystack.top()=='[' && s[i]==']')
            {
                mystack.pop();
            }
            else
            {
                mystack.push(s[i]);
            }
        }

        if(!mystack.empty())
        {
            cout<<"No"<<endl;
        }
        else if(mystack.empty())
        {
            cout<<"Yes"<<endl;
        }
        while(!mystack.empty())
        {
            mystack.pop();
        }
    }
    return 0;
}