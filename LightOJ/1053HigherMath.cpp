#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int t;
    int a,b,c;
    int cnt = 0;
    cin>>t;
    while(t--)
    {
        cnt++;
        cin>>a>>b>>c;
        if(c>a && c>b)
        {
            long long int sum = (a*a)+(b*b);
            if(sum == (c*c))
            {
                cout<<"Case "<<cnt<<": yes"<<endl;
            }
            else
            {
                cout<<"Case "<<cnt<<": no"<<endl;
            }
        }
        else if(b>a && b>c)
        {
            long long int sum = (a*a)+(c*c);
            if(sum == (b*b))
            {
                cout<<"Case "<<cnt<<": yes"<<endl;
            }
            else
            {
                cout<<"Case "<<cnt<<": no"<<endl;
            }
        }
        else if(a>b && a>c)
        {
            long long int sum = (b*b)+(c*c);
            if(sum == (a*a))
            {
                cout<<"Case "<<cnt<<": yes"<<endl;
            }
            else
            {
                cout<<"Case "<<cnt<<": no"<<endl;
            }
        }

    }

    return 0;
}

