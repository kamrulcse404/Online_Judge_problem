#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin>>t;
    while(t--)
    {
        int first_innings[4];
        int second_innings[4];

        int ban=0, pak=0, b=0;

        for(int i=0; i<4; i++)
        {
            scanf("%d",&first_innings[i]);
            if(i<=1)
            {
                ban+=first_innings[i];
            }
            if(i>=2)
            {
                pak+=first_innings[i];
            }
        }
        if(ban>pak)
            b++;
        for(int i=0; i<4; i++)
        {
            scanf("%d",&second_innings[i]);
            if(i<=1)
            {
                ban+=second_innings[i];
            }
            if(i>=2)
            {
                pak+=second_innings[i];
            }
        }
        if(ban>pak)
            b++;
        if(b==2)
            cout<<"Banglawash"<<endl;
        else
            cout<<"Miss"<<endl;
    }

    return 0;
}
