#include <bits/stdc++.h>
using namespace std;
int main() {
   int t;
   cin>>t;
    while (t--){
        int n,k,i;
        cin>>n>>k;
        int arr[n];
        for(i=0;i<n;++i)cin>>arr[i];
        sort(arr,arr+n);
        if(arr[n-1]<=k||arr[0]+arr[1] <=k)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
}
