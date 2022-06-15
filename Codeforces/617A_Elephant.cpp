#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n>5)
    {
        int res = n/5;
        if((res*5) == n)
        {
            cout << res << endl;
        }
        else
        {
            cout << res+1 << endl;
        }
    }
    else{
        cout << "1" << endl;
    }
    return 0;
}

