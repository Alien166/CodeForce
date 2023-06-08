#import <bits/stdc++.h>
using namespace std;

int n,m,i,j,s;
int c[256];
char q,a[104][104],r;
int main(){
	cin>>n>>m>>q;
	for(i=1;i<=n;i++)
		for(j=1;j<=m;j++)
			cin>>a[i][j];
	for(i=1;i<=n;i++)
		for(j=1;j<=m;j++)
			if(a[i][j]==q)
				c[a[i-1][j]]=c[a[i][j-1]]=c[a[i+1][j]]=c[a[i][j+1]]=1;
	for(i='A';i<='Z';i++)
		s+=c[i];
	cout<<s-c[q];
}
