#include <bits/stdc++.h>
using namespace std;
#define loop(i,n,m) for(int i=n;i<m;i++)
#define ll long long int
#define ld long double
#define pb push_back
#define pob pop_back
#define mp make_pair
#define lb lower_bound
#define ub upper_bound
#define nl "\n"
#define max3(a,b,c) max(max((a),(b)),(c))
#define max4(a,b,c,d) max(max((a),(b)),max((c),(d)))
#define min3(a,b,c) min(min((a),(b)),(c))
#define min4(a,b,c,d) min(min((a),(b)),min((c),(d)))
#define max3(a,b,c) max(max((a),(b)),(c))
#define max4(a,b,c,d) max(max((a),(b)),max((c),(d)))
#define min3(a,b,c) min(min((a),(b)),(c))
#define min4(a,b,c,d) min(min((a),(b)),min((c),(d)))
const int mod=998244353;
const double pi = 3.141592653589793;
const int N =1e10;
ll T,n,ad,k;
ll arr[20009];
void solve(int tc){
  int n,i;
  cin>>n;
  int a[n+1],b[n+1];
  for(i=1;i<=n;i++) cin>>a[i];
  for(i=1;i<=n;i++) cin>>b[i];
    bool f=1;
    for(i =1;i<n;i++){
      f&=((a[i]<=a[n])&&(b[i]<=b[n]) || (a[i]<=b[n])&&(b[i]<=a[n]));
      
  }
    cout<<(f?"YES\n":"NO\n");
}
int main()
{
   int T=1;   cin>>T;
   for(int i=1;i<=T;++i){
       solve(i);
       cout<<"\n";
   }
    return 0;
}

