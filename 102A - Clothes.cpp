#include <bits/stdc++.h>
using namespace std;
main(){
	int n,m,x,y,i,a[101][101]={0},b[101];
	cin>>n>>m;
	for(i=1;i<=n;i++)
		cin>>b[i];
	for(i=0;i<m;i++){
		cin>>x>>y;
		a[x][y]=a[y][x]=1;
	}
	m=INT_MAX;
	for(i=1;i<n-1;i++)
		for(x=i+1;x<n;x++)
			for(y=x+1;y<=n;y++)
				if(a[i][x]&&a[x][y]&&a[i][y])
					m=min(m,b[i]+b[x]+b[y]);
	if(m==INT_MAX)m=-1;
	cout<<m;
}
