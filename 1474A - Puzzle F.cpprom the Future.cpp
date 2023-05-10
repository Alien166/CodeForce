#include <bits/stdc++.h>
using namespace std;
int main(){
long long t,n,a,j;
char x;
cin>>t;
while(t--){
cin >> n;  a=-1;
while(n--){
cin>>x;
 if(x-'0'+1!=a)a=1+x-'0';
else if(x-'0'!=a)a=x-'0';
cout <<a-x+'0';
}
cout<<"\n";}
}
