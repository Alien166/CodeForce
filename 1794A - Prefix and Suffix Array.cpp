#include <bits/stdc++.h>
#define ll long long 
using namespace std;
void solve()
{
    vector<string>v ;
    ll n;
    cin>>n;
    string s;
    for(int i=0;i<2*(n-1);i++)
    {
        cin>>s;
        if((int)s.size()==n-1)
        {
            v.push_back(s);
        }
    }
    reverse(v[1].begin(),v[1].end());
    if(v[0]==v[1])
    {
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    
    
}

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
     solve();
    }
    return 0;
}
