#include<bits/stdc++.h>
using namespace std;
int n,x,p,i,s,a[1790];
int main(){
    cin>>n;
    for(p=1;i<n;i++)
        cin>>x,
                s+=x==1,
                a[s]=x;
    for(cout<<s<<endl,i=1;i<=s;i++)cout<<a[i]<<" ";
}
