#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n,t;
    cin>>t;
    while (t--)
    {
        cin>>n;
        for(int i=n-3;i>1;--i) cout<<i<<" ";
        cout<<n-2<<" 1 "<<n-1<<" "<<n<<endl;
    }
    return 0;
}
