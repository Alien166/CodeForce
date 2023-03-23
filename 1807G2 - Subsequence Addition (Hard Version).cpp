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
   int n; cin>>n;
   vector<int> a(n);
   for(int &m :a)  cin>>m;
   sort(begin(a),end(a));
     if(a[0]!=1){
      cout<<"NO";
         return;
    }
     ll sum=1;
   for(int i=1;i<n;++i){
      if(sum<a[i]){
          cout<<"NO";
          return;
      }
      sum +=a[i];
  }
  cout<<"YES";
}
 int main(){

    int T=1;   cin>>T;
    for(int i=1 ; i<=T ; ++i){
        solve(i);
        cout<<"\n";
    }

        return 0;
    }
