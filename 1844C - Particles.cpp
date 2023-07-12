#include<iostream>
using namespace std;
#define int long long
signed main()
{
	int t,n,i,x,mx,a,b;
	cin>>t;
	while(t--)
	{
		mx=-1e10,a=0,b=0;
		cin>>n;
		for(i=1;i<=n;i++)
		{
			cin>>x;
			mx=max(x,mx);
			if(x>0)
			{
				if(i%2==0) a+=x;
				else b+=x;
			}
		}
		if(max(a,b)==0) cout<<mx<<"\n";
		else cout<<max(a,b)<<"\n";
	}
	return 0;
}
//相邻的粒子不可能合在一起 
