#include<bits/stdc++.h>
using namespace std;
int n,a[100001],b[100001],s=0,f,l;
int main() {
cin >> n;
for(int i=0;i<n;b[i]=a[i],i++)
cin>>a[i];
sort(a,a+n);
for(int i=0;i<n;i++)
if(a[i]!=b[i]){
s++,l=i;
if(s==1)
f=i;
}
reverse(b+f,b+l+1);
for(int i=f;i<l;i++)
if(a[i]!=b[i]){
cout<<"no";
return 0;
}
cout<<"yes\n"<<f+1<<" "<<l+1;
return 0;
}
