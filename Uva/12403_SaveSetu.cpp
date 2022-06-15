#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int sum = 0;
    while(t--)
    {
        char s[20];
        int m;
        scanf("%s",&s);
        if(!strcmp("donate",s))
        {
            scanf("%d",&m);
            sum += m;
        }

        else{
            cout << sum << endl;
        }

    }

    return 0;
}