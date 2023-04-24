#include <bits/stdc++.h>
using namespace std;
int a[200005];
int main()
{
int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
for(int i=1;i<=n;i++)cin>>a[i];
sort(a+1,a+n+1);
cout<<max(1LL*a[1]*a[2],1LL*a[n]*a[n-1])<<'\n';
}
    return 0;
}
