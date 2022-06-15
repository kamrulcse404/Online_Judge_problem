#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    int n, sum = 1;
    char s[21];
    scanf("%d %s",&n,s);
    int len = strlen(s);
    for(int i=n; i>=1; i=i-len)
    {
        sum*=i;
    }
    cout<<sum<<endl;
    return 0;
}