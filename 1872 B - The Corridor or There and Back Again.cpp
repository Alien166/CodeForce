#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int a,b,i,mi=1e9;
		for(i=0;i<n;i++){
			cin>>a>>b;
			mi=min(mi,a+(b-1)/2);
		}
		cout<<mi<<endl;
	}
}
