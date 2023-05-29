#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int>ar(n);
    vector<int>br(n);
    for (int i = 0; i <n ; ++i) {
        cin>>ar[i];
    }
    for (int i = 0; i <n ; ++i) {
        cin>>br[i];
    }
    unordered_map<int ,int>a;
    unordered_map<int,int>b;

    int cnt=1;
    for(int i=1;i<=n;+i++) {
        if(i==n){
            a[ar[i-1]]=max(cnt,a[ar[i-1]]);
            break;
        }

        if(ar[i]==ar[i-1]){
            cnt++;
        } else{
            a[ar[i-1]] = max(cnt,a[ar[i-1]]);
                cnt=1;
            }
        }
    cnt=1;
    for(int i=1;i<=n;+i++) {
        if(i==n){
            b[br[i-1]]=max(cnt,b[br[i-1]]);
            break;
        }

        if(br[i]==br[i-1]){
            cnt++;
        } else{
            b[br[i-1]] = max(cnt,b[br[i-1]]);
            cnt=1;
        }
    }


        int ans=0;
        for( int e:ar) {
            ans=max(ans,a[e]+b[e]);
        }
        for(int e :br) {
            ans=max(ans,b[e]+a[e]);
        }
        cout<<ans<<endl;
    }


int main() {
    int t;
    cin>>t;
    while (t--) {
        solve();
    }
    return 0;
}
