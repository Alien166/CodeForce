#include<bits/stdc++.h>
using namespace std;
const long long inf = 1000000000;
#define int long long	

void solve(){
	int n; cin>>n;
	if(n%2==0){
		cout<<"-1"<<endl;
		return;
	}
	n>>=1;
	cout<<"30"<<endl;
	for(int i=29;i>=0;i--) cout<<((n>>i)&1?2:1)<<" ";
    cout<<endl;
}

int32_t main(){
	int t; cin>>t;
	while(t--) solve();
}
