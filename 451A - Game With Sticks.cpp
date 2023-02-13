#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n,m;
    cin>>n>>m;
    bool win=0;
    if(min(n,m)&1){
        win=1;
    }
    if(win)
    {
        cout<<"Akshat";
    }
    else{
        cout<<"Malvika";

    }
    return 0;
}
