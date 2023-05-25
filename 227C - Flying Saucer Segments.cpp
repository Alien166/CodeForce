#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,m;
	cin>>n>>m;
	long long a=3,ans=1;
	while(n){
		if(n%2)
			ans=(ans*a)%m;
		a=(a*a)%m;
		n/=2;
	}
	cout<<(ans-1+m)%m<<endl;
	return 0;
}
