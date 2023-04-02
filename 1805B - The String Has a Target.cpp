#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s;
		cin>>s;
		int mn=0;
		for(int i=1;i<n;i++){
			if(s[mn]>=s[i]) mn=i;
		}cout<<s[mn];
		for(int i=0;i<n;i++){
			if(i!=mn) cout<<s[i];
		}cout<<endl;
	}return 0;
}
