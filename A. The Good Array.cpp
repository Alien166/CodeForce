#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        int n,k;
        cin>>n>>k;
        int mn=n;
        for(int i=1;i<=n;++i)
        {
            int l=(i+k - 2) /k;
            int r=(n-i+k-1)/k;
            mn= min(mn,l+r);
        }
        cout<<mn+1<<endl;
    }
    return 0;
}
