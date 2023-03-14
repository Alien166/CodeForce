#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,mini=100000000000,t;
   cin>>n;
   string str;
   ll arr[n];
   cin>>str;
   for(int i=0;i<n;++i){
           cin>>arr[i];
   }
   for(int i=0;i<n-1;++i){
       if(str[i]=='R'&&str[i+1]=='L'){
           t=(arr[i+1]-arr[i])/2;
           if(t< mini){
               mini=t;
           }
       }
   }
   if(mini==100000000000){
       cout<<-1;
   }else{
       cout<<mini;
   }
    return 0;
}
