#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,m,n,cnt = 0;
    cin>>t;
    while(t--)
    {
        cnt++;
        cin>>m>>n;

        if(m==1 || n==1)
        {
            cout<<"Case "<<cnt<<": "<<m*n<<endl;
        }
        else if(m==2 || n==2)
        {
            int sum = m*n;
            if(sum>=8)
            {
                int temp = sum/8;
                temp *=4;
                int rem = sum%8;
                if(rem>=1 && rem<=4)
                {
                    temp+=rem;
                }
                else if(rem>4 && rem<=7)
                {
                    temp+=4;
                }
                cout<<"Case "<<cnt<<": "<<temp<<endl;
            }
            else if(sum<8)
            {
                int temp = sum/4;
                temp *=4;
                cout<<"Case "<<cnt<<": "<<temp<<endl;
            }
        }
        else
        {
            int sum = m*n;
            sum-=(int)(sum/2);
            cout<<"Case "<<cnt<<": "<<sum<<endl;
        }
    }
    return 0;
}

