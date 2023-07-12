#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;cin>>t;
	while(t--){
	    int n; cin>>n;
	    string s(n,'a');
	    int j=2;
	    while(n%j==0) j++;
	    for(int i=0;i<n;i++) s[i]+=i%j;
	    
	   cout<<s<<endl;
	}
}
