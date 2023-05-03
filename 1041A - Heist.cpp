#include<bits/stdc++.h>
using namespace std;
int n,i,a[179000];
int main(){
	for(cin>>n;i<n;i++)cin>>a[i];
	sort(a,a+n);
	cout<<a[n-1]-a[0]-n+1;
}
