#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,T;
    cin>>T;
    while(T--)
    {
        cin>>n>>m;
        cout<<min(2,n-1)*m<<endl;
    }
    return 0;
}
