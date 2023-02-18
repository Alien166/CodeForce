#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
   int n,total(0),arr[12];
   cin>>n;
   for(int i=0;i<12;++i)
   {
       cin>>arr[i];
       total +=arr[i];
   }
   if(total<n){
       cout<<-1<<endl;
   }
   else{
       sort(arr,arr+sizeof(arr)/sizeof (arr[0]),greater<int>());
       int sum=0,mouth=0;
       while (sum<n){
           sum +=arr[mouth];
           mouth +=1;
       }
       cout<<mouth<<endl;
   }
    return 0;
}
