#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    scanf("%d",&T);
    while(T--){
        int n;
        cin>>n;
        for(int i=1;i<=n;++i){
        int q=i;
        while (q--)cout<<"(";q=i;
        while (q--)cout<<")";q=n-1;
        while (q--)cout<<"()"<<endl;

    }
    }
}
