#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r, c,f=1;
    cin>>r>>c;
    char ch;
    for(int i=1; i<=r; i++)
    {
        for(int j=1; j<=c; j++)
        {
            cin>>ch;
            if(ch=='M' || ch=='C' || ch=='Y')
            {
                f=0;
            }
        }
    }
    if(f==0)
    {
        cout<<"#Color"<<endl;
    }
    else if(f==1)
    {
        cout<<"#Black&White"<<endl;
    }
    return 0;
}
