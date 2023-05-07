#import<bits/stdc++.h>
using namespace std;
int i,j,k,m,n,h[1005];
main()
{
	for(cin>>n;i++<n;)cin>>h[i];
	*h=h[n+1]=1005;
	for(i=0;i++<n;)
	{
		for(j=i;h[j]>=h[j-1];)j--;
		for(k=i;h[k]>=h[k+1];)k++;
		m=max(m,k-j+1);
	}
	cout<<m;
}
