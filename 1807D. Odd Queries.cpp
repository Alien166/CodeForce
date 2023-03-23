#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const ll N=2e5+10;
int _,n,m,a[N],s[N];
#define output(v) for(auto&it:v){cout<<it<<" ";}cout<<"\n"
#define input(v) for(auto&it:v){cin>>it;}
#define watch(x) cerr<<#x<<" : "<<x<<endl;
#define all(v) v.begin(),v.end()
void FastCode() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
void solve(int tc) {
    ll i, j;
    ll n, q;
    cin >> n >> q;
    vector<ll> a(n);
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<ll> psum(n + 1);
    for (i = 1; i <= n; i++) {
        psum[i] = psum[i - 1] + a[i - 1];
    }
    for (i = 0; i < q; i++) {
        ll l, r, k;
        cin >> l >> r >> k;
        ll sum = psum[l - 1] + psum[n] - psum[r];
        ll sz = r - l + 1;
        if (k % 2) {k = 1;}
        else {k = 2;}
        sum += k * sz;
        if (sum % 2) {
            cout << "YES" ;
        } else {
            cout << "NO" ;
        }
    }

}
 int main(){

    int T=1;   cin>>T;
    for(int i=1 ; i<=T ; ++i){
        solve(i);
        cout<<"\n";
    }

        return 0;
    }
