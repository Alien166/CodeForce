#include<bits/stdc++.h>
using namespace std;
#define  ll long long 
int main()
{
   ll n,f;
   cin>>n;
   if(n%2==0){
       f=n/2;
   }
   else{
       f=((n+1)/2)*-1;
   }
   cout<<f;
    return 0;
}
