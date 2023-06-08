#include<bits/stdc++.h>
using namespace std;
int64_t n,f,k,l,i,w,s,a[100179];
int main(){
for(cin>>n>>f;i<n;i++)cin>>k>>l,w=min(k,l),a[i]=min(2*k,l)-w,s+=w;
sort(a,a+n);
for(i=0;i<n;i++)s+=i<f?a[n-1-i]:0;
cout<<s;
}
