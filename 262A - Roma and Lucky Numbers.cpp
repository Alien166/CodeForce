#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,k,a,cnt=0;
  cin>>n>>k;
    while (n>0) {
        int l = 0;
        cin >> a;
        while (a > 0)
        {
            if (a % 10 == 4 || a % 10 == 7)
                l++;
                a /= 10;

        }
        if (l <= k)
            cnt++;
            n--;
    }
    cout<<cnt;

    return 0;
}
