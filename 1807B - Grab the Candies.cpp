#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const ll MAX_SIZE=10000;
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
    int n,ev=0,odd=0;
    cin>>n;
    while (n--) {
        int x;
        cin >> x;
        if (x & 1)
            odd += x;
        else
            ev += x;
    }
    cout<<(ev>odd?"YES":"NO")<<endl;
}
 int main(){

    int T=1;   cin>>T;
    for(int i=1 ; i<=T ; ++i){
        solve(i);
        cout<<"\n";
    }

        return 0;
    }
