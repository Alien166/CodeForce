#include<bits/stdc++.h>
using namespace std;
int main(){
int t; cin>>t;
while(t--){
map<char,int>m;
string s; cin>>s;
for(int j=0;j<4;j++) 
m[s[j]]++;
int ans=0;
if(m.size()==1) 
ans=-1;
else if(m.size()>=3)
ans=4;
else{
for(auto it:m){
if(it.second==2) ans=4;
else ans=6;
break;
}
}
cout<<ans<<endl; }}
