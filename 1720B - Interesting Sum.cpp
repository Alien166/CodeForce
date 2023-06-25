#include<bits/stdc++.h>
using namespace std;
int t,n,a[100005];
int main(){
          cin>>t;
          while(t--){
                    cin>>n;
                    for(int i=1;i<=n;i++){ cin>>a[i];}
                              sort(a+1,a+1+n);
                              cout<<(a[n]-a[1])+(a[n-1]-a[2])<<"\n";}
                              return 0;
          
}
