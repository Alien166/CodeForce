#include<bits/stdc++.h>
using namespace std;
int n,k,l,b,m;
main(){
cin>>n>>k;
if(k>=2)return cout<<"Yes",0;
int a[n];
for(int i=0;i<n;i++){cin>>a[i];if(a[i]==0)l=i;}
cin>>b;a[l]=b;
for(int i=0;i<n-1;i++)if(a[i]>a[i+1])m=1;
cout<<(m?"Yes":"No");
}
