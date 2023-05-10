#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll int n,sum,i;
int main() {

   int arr[300001];
   cin>>n;
   for(;i<n;++i)cin>>arr[i];
   sort(arr,arr+n);
   for(int i=0;i<n;++i) sum += abs(i+1-arr[i]);
   cout<<sum;

   return 0;
}
