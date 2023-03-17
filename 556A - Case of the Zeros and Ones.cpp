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
int main(){
int n,ans=0;
cin>>n;
char ch;
    while (n--)
        cin>>ch,
    ch=='1'?ans++:ans--;
    cout<<abs(ans);
    return 0;
}
