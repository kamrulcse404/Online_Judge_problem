#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,cnt = 0;
    cin>>t;
    while(t--)
    {
        cnt++;
        int position, l_position;
        cin>>position>>l_position;
        if(position<=l_position)
        {
            cout<<"Case "<<cnt<<": "<<(l_position*4)+19<<endl;
        }
         else if(position>l_position)
         {
             int tmp = (position*4)+19;
             tmp = tmp+(position-l_position)*4;
             cout<<"Case "<<cnt<<": "<<tmp<<endl;
         }
    }
    return 0;
}
