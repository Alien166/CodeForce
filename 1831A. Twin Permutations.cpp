#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int tc;
    cin>>tc;
    while (tc--)
    {
        ll n;
        cin>>n;
        vector<ll>a(n);
        ll N=n+1;
        for(int i=0;i<n;++i)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;++i)
        {
            cout<<N-a[i]<<' ';

        }cout<<"\n";
    }

    return 0;
}
