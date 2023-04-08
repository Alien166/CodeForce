#include<bits/stdc++.h>
using namespace std;
int t,n,k,a[1001][1001];
int main(){
	cin>>t;
	while(t--){
		cin>>n>>k;int ans=0;
		for(int i=1;i<=n;i++)for(int j=1;j<=n;j++)scanf("%d",&a[i][j]);
		for(int i=1;i<=n;i++)for(int j=1;j<=n;j++)ans+=(a[i][j]^a[n-i+1][n-j+1]);
		ans/=2;if(ans<=k&&(n%2==1||ans%2==k%2))puts("YES");else puts("NO");
	}
}
