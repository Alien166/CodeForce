#include<bits/stdc++.h>
using namespace std;
int n,m,s,a,b,d[11];
main(){
cin>>n>>m;
while(m--)cin>>a>>b,d[b]+=a;
for(int i=10;i>0&&n>0;i--)s+=i*min(n,d[i]),n-=d[i];
cout<<s;
}
