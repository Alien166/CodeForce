#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		string s;cin>>s;
		map<char,int>m;
		for(int i=0;i<s.size();i++){
			m[s[i]]++;
		}
		int cnt=0;
		for(auto i:m){
			if(i.second&1)cnt+=1;
		}
		cout<<(cnt>k+1?"NO":"YES")<<endl;
	}
}
