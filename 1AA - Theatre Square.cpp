#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    ll n,m,a,x,y;
    cin>>n>>m>>a;
    x=n/a;
    y=m/a;
    if(n%a!=0){
        x +=1;
    }
    if(m%a!=0){
        y +=1;
    }
    cout<<x*y<<endl;
    return 0;
}
