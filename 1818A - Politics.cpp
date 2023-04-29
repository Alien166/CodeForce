#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,k,i,c;
	cin>>t;
	while(t--){
		c=1;
		cin>>n>>k;
		string s[n+1];
		cin>>s[0];
		for(i=1;i<n;i++){
			cin>>s[i];
			if(s[i]==s[0])c++;
		}
		cout<<c<<endl;
	}
}
