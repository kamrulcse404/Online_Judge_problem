#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    char s[10];
    int cnt = 0;
    while(1)
    {
        cnt++;
        scanf("%s",s);
        if(!strcmp(s,"*"))
            break;
        else if(!strcmp(s,"Hajj"))
            printf("Case %d: Hajj-e-Akbar\n",cnt);
        else if(!strcmp(s,"Umrah"))
            printf("Case %d: Hajj-e-Asghar\n",cnt);
    }

    return 0;
}