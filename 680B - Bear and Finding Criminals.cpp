#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const ll MAX_SIZE=10000;
#define output(v) for(auto&it:v){cout<<it<<" ";}cout<<"\n"
#define input(v) for(auto&it:v){cin>>it;}
#define watch(x) cerr<<#x<<" : "<<x<<endl;
#define all(v) v.begin(),v.end()
void FastCode() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main()
{
    int n,in;
        cin>>n>>in;
        int a[n];
        for (int i=1;i<=n;i++)
            cin>>a[i];
        int ans=0;
        int l=in-1,r=in+1;
        while(l>=1&&r<=n)
        {
            if (a[l]==1&&a[r]==1)
            {
                ans+=2;
            }
            l--,r++;
        }
        if (l==0)
        {
            for (int i=r;i<=n;i++)
            {
                if (a[i]==1)
                    ans++;
            }
        }
        if (r==n+1)
        {
            for (int i=l;i>=0;i--)
            {
                if (a[i]==1)
                    ans++;
            }
        }
        if (a[in]==1)
            ans++;
        cout<<ans<<endl;
        return 0;
    }
