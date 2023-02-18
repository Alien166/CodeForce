#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n,Drink[105];
    cin>>n;
    double sum=0.0,ans=0.0;
    for(int i=0;i<n;++i){
        cin>>Drink[i];
        sum +=Drink[i];
    }
    ans=sum/n;
    cout<<fixed<<setprecision(12)<<ans<<"\n";
    return 0;
}
