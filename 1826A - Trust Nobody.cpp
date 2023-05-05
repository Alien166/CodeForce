#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n; cin>>t;
    while(t--&&cin>>n){
        int a[n],i,flag=0,c=0;
        for(int i=0;i<n;i++) cin>>a[i];
        for(i=0;i<=n;i++){
            c=0;
            for(int j=0;j<n;j++) if(a[j]>i) c++;
            if(c==i){ flag=1; break;}
        }
        if(flag) cout<<i<<'\n';
        else cout<<-1<<endl;
    }
}
