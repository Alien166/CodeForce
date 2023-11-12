#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t; cin>>t;while(t--){
		string s; cin>>s;
		char ch = '1';
		int ans = 4;
		for(char c : s){
			if(c=='0') c+=10;
			ans += abs(c-ch);
			ch = c;
		}
		cout<<ans<<endl;
	}}
