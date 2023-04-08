#include <iostream>
using namespace std;
#define ll long long
void solve()
{
    int n,m;
    cin>>n>>m;
    int x,y,a,b;
    cin>>x>>y>>a>>b;
    int ans;
    if((x==1&&y==1)||(a==1&&b==1)||(x==n&&y==m)||(a==n&&b==m)||(x==1&&y==m)||(a==1&&b==m)||(x==n&&y==1)||(a==n&&b==1)){
      //  cout<<3<<endl;
        ans=2;
    }
    else if(x==1||x==n||a==1||a==n||y==1||y==m||b==1||b==m){
       // cout<<5<<endl;
        ans=3;
    }
    else{
        //cout<<8<<endl;
        ans=4;
    }
    int p=min(n,m);
    cout<<min(ans,p)<<endl;
    return;
}
signed main()
{
    int tc;
    cin>>tc;
    while(tc--){
        solve();
    }
    return 0;
}
