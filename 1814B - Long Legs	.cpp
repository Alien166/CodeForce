#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a, b;
        cin >> a >> b;
        int ans = a+b+100;
        for (int i = 0; i <= ans; i++)
		    ans = min(ans, i + (a + i) / (i + 1) + (b + i) / (i + 1));
        cout << ans << endl;    
    }
}
