#include <iostream>
#include <string>
using namespace std;
int main()
{
	int t;
	cin >> t;
	for(int i=0;i<t;i++)
	{
		int n;
		cin>>n;
		for(int j=2;j<=n;j+=2)
		{
			cout<<j<<' ';
		}
		cout<< 1 <<' ';
		for(int j=(n+1)/2*2-1;j>1;j-=2)
			cout<<j<<' ';
		cout<<endl;
	}
}
