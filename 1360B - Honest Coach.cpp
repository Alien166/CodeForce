#include<bits/stdc++.h>
using namespace std;
int i,m,n,t,a[60];
main()
{
	for(cin>>t;t--;)
	{
		cin>>n;
		for(i=0;i++<n;)cin>>a[i];
		sort(a,a+i);
		for(i=0,m=999;++i<n;)m=min(m,a[i+1]-a[i]);
		cout<<m<<endl;
	}
}
