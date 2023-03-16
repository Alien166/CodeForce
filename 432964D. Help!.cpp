#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll a ,b,res=0;
    cin>>a>>b;
    ll z= max(a,b);
    for(int i=1;i<=z;i++){
        if(a%i==0 && b%i==0){
            res++;
        }
    }
    cout<<res;
    return 0;
}
