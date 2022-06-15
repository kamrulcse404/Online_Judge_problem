#include<bits/stdc++.h>
using namespace std;
int main()
{
    int numberOfStop, exit, enter;
    cin>>numberOfStop;
    int have = 0;
    int maximum = 0;
    for(int i=1; i<=numberOfStop; i++){
        cin>>exit>>enter;
        have -= exit;
        have += enter;
        if(have>maximum){
            maximum = have;
        }
    }
    cout<<maximum<<endl;
    return 0;
}
