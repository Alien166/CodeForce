#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int n,a,b,c,d;
	cin>>n;
	while(n--){
		cin>>a>>b>>c>>d;
		if(max(a,b)>min(c,d) && max(c,d)>min(a,b))
		cout<<"YES\n";
		else 
		cout<<"NO\n";
	}
}
