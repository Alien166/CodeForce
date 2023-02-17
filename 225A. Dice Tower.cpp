#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n,x,a,b;
    cin>>n>>x;
    bool T= true;
    while(n--)
    {
        cin>>a>>b;
        if(x==a||x==b||x==7-a||x==7-b){
            T= false;
        }
        x=7-x;
    }
    cout<<(T?"YES":"NO")<<endl;
    return 0;
}
