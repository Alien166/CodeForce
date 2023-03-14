#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
   int n,a,b,k,ans=0;
   cin>>n>>k;
   for(int i=0;i<n;++i){
       cin>>a>>b;
       ans +=(b-a+1);
   }
   cout<<(k-ans%k)%k;
    return 0;
}
