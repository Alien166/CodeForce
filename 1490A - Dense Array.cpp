#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n,a,b,count=0;
cin>>n;
cin>>a;
for(int i=2;i<=n;i++){
cin>>b;
int x=min(a,b);
int y=max(a,b);
while(x*2<y){
x*=2;
count++;}
a=b;}
cout<<count<<'\n';}
return 0;}
 			   	  					 			   	     	 	
