#include<iostream>
using namespace std;
int main(){
int n,e=0,o=0;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
cin>>a[i];
if (a[i]%2==0)
e++;
else
o++;
}
if(o%2==0)
cout<<e;
else
cout<<o;
}
