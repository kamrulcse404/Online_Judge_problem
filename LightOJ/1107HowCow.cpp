#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, x1, y1, x2, y2,cnt = 0;
    cin>>t;
    while(t--)
    {
        cnt++;
        cin>> x1 >> y1 >> x2 >> y2;
        int n;
        cin>>n;
        cout<<"Case "<<cnt<<":"<<endl;

        for(int i=1; i<=n; i++)
        {
            int cx, cy;
            cin>> cx >> cy;
            if((cx>=x1 && cx<=x2) && (cy>=y1 && cy<=y2)){
                cout<<"Yes"<<endl;
            }
            else{
                 cout<<"No"<<endl;
            }
        }
    }
    return 0;
}
