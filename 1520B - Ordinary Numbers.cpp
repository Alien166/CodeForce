#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
#define output(v) for(auto&it:v){cout<<it<<" ";}cout<<"\n"
#define input(v) for(auto&it:v){cin>>it;}
#define watch(x) cerr<<#x<<" : "<<x<<endl;
#define all(v) v.begin(),v.end()
void FastCode() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
const int N = 1e5+5, OO = 0x3f3f3f3f;
int solve(int n) {
    int s = 0;
    for (int p = 1; p <= n; s++) {
        p = p / (p % 10) * (p % 10 + 1);
        if (p % 10 == 0)
            p++;
    }
    return s;
}
int main()
{
   int tc;
   cin>>tc;
    while (tc--) {
        ll n;
        cin >> n;
        cout << solve(n) << endl;
    }
    return 0;
}
