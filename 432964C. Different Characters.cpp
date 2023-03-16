#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll c;
    cin>>c;
    ll res=0;
    string s;
    cin>>s;
 
    vector<int> ascii(123,0);
 
    for(int i=0;i<c;i++)
    {
        if(ascii[int(s[i])]==0)
        {
            res++;
        }
        ascii[int(s[i])]++;
    }
    cout<<res;
}
