#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
   int n,m,d,k=0;
   cin>>n>>m>>d;
   int arr[n*m],sum=0;
   for(int i=0;i<n;++i)
       for(int j=0;j<m;++j){
           cin>>arr[k];k++;}

   sort(arr,arr+k);
   for(int i=0;i<k;++i){
       sum +=(abs(arr[i]-arr[k/2]));
   }
   if(sum%d==0){
       cout<<sum/d<<"\n";
   }else{
       cout<<"-1\n";
   }

    return 0;
}
