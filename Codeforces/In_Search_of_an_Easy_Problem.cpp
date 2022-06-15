#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, num, check = 0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>num;
        if(num == 1){
            check = 1;
        }
    }
    if(check == 1){
        cout<<"HARD"<<endl;
    }else{
        cout<<"EASY"<<endl;
    }

    return 0;
}
