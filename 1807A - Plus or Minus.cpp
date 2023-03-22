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
void solve() {
int a,b,c;
cin>>a>>b>>c;
cout<<(a+b==c?'+':'-')<<endl;
}
 int main(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);

        int testcase;
        cin >> testcase;
        for (int t = 1; t <= testcase; t++){
            solve();
        }

        return 0;
    }
