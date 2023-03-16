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
pair<int, string> result[N];
int n, a, b, c, d, e, sum;
string s;
int main()
{
    cin>>n;
    for(int i=0;i<n;++i){
        cin>> s >> a >> b >> c >> d >> e ;
        sum =a+b+c+d+e;
        result[i]= make_pair(sum * -1,s);
    }
    sort(result,result+n);
    for(int i=0;i<n;++i)
    {
        cout<<result[i].second<<" "<<result[i].first * -1<<endl;
    }
    return 0;
}
