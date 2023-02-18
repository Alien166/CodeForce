#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
   int n,max=0,min=101,maxi=0,mini=0;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;++i)
   {
       cin>>arr[i];
       if(arr[i]>max){
           max=arr[i];
           maxi=i;
       }
       if(arr[i]<=min){
           min=arr[i];
           mini=i;
       }
   }
   if(maxi>mini){
       mini++;
   }
   cout<<maxi+(n-1)-mini<<endl;
    return 0;
}
