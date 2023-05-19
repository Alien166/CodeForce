#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
int t;
cin>>t;
while(t--){
 int n,p;
 cin>>n>>p;
 int a[n],b[n];
 vector<pair<int,int>> v(n);
 for(int i=0;i<n;i++) {cin>>a[i];
 v[i]={a[i],i};
 }
 sort(v.begin(),v.end());
 for(int i=0;i<n;i++) cin>>b[i];
  sort(b,b+n);
  vector<int> s(n);
   for(int i=0;i<n;i++){
       s[v[i].second]=b[i];   }
   for(int i=0;i<n;i++) cout<<s[i]<<" ";
        cout<<endl;
    
}}
