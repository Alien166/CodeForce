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
int main()
{
    int n,ans=0,alex=1,bob=2,carl=3;
    cin>>n;
    while (n--){
        int x;
        cin>>x;
        if(carl==x){cout<<"NO";return 0;}
        carl=6-x-carl;
    }
    cout<<"YES";

    return 0;
}
