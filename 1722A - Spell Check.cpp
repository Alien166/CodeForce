#include<bits/stdc++.h>
using namespace std;
int main() {
	int t,n;cin>>t;string s;
	while(t--){
	    cin>>n>>s;
		sort(s.begin(),s.end());
		cout<<(s=="Timru"?"YES":"NO")<<endl;
	}
	return 0;
}
