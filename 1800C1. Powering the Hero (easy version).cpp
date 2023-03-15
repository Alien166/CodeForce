#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n,s,k;
    ll ans;
    cin>>n;
    while (n--)
    {
        ans=0;
        priority_queue<int> q;
        cin>>s;
        for (int i = 0; i < s; ++i) {
            cin>>k;
            q.push(k);
            if(k==0){
                ans +=q.top();
                q.pop();
            }
        }
        cout<<ans<<endl;

    }
    return 0;
}
