#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
   ll n;
   cin>>n;
   if(n==0){
       cout<<1<<"\n";
   }
   else if(n%4==0){
       cout<<6<<"\n";
   }
   else if(n%4==1){
       cout<<8<<"\n";
   }
   else if(n%4==2){
       cout<<4<<"\n";
   }
   else {
       cout<<2<<"\n";
   }
    return 0;
}
