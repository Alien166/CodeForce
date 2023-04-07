#include<bits/stdc++.h>
using namespace std;
string s,t;
int j;
main(){
    cin>>s>>t;
    for(int i=0;i<t.size();i++) 
    if(t[i]>s[i]) 
    return cout<<-1,0;
    cout<<t;
}
