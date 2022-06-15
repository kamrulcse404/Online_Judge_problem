#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    char s[20];
    int cnt = 0;
    while(1)
    {
        cnt++;
        scanf("%s",&s);
        if(!strcmp("#",s))
        {
            return 0;
        }
        else if(!strcmp("HELLO",s))
        {
            cout << "Case " << cnt << ": ENGLISH" << endl;
        }
        else if(!strcmp("HOLA",s))
        {
            cout << "Case " << cnt << ": SPANISH" << endl;
        }
        else if(!strcmp("HALLO",s))
        {
            cout << "Case " << cnt << ": GERMAN" << endl;
        }
        else if(!strcmp("BONJOUR",s))
        {
            cout << "Case " << cnt << ": FRENCH" << endl;
        }
        else if(!strcmp("CIAO",s))
        {
            cout << "Case " << cnt << ": ITALIAN" << endl;
        }
        else if(!strcmp("ZDRAVSTVUJTE",s))
        {
            cout << "Case " << cnt << ": RUSSIAN" << endl;
        }
        else
        {
            cout << "Case " << cnt << ": UNKNOWN" << endl;
        }
    }

    return 0;
}