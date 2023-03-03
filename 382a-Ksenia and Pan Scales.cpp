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
int main()
{
   string s,t,l,r;
   cin>>s;
   int p=s.find("|");
   l=s.substr(0,p);
   r=s.substr(p+1);
   cin>>t;
   for(auto c:t)
       if(l.size()<=r.size()) l+=c;
       else r+=c;
   cout<<(l.size()==r.size()?l+"|"+r:"Impossible")<<endl;
    return 0;
}
