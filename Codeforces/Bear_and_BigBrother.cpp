#include<bits/stdc++.h>
using namespace std;

int main()
{
    int limak, bob;
    cin>>limak>>bob;
    int counter = 0;
    while(limak<bob || limak == bob){
        limak *= 3;
        bob *= 2;
        counter++;
    }

    cout<<counter<<endl;

    return 0;
}
