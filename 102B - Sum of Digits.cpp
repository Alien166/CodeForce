#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
   string str;
   int ans=0;
   cin>>str;
    while (str.size()!=1)
    {
        int sum=0;
        for(char ch :str) sum +=(ch-'0');
        str= to_string(sum);
        ans++;
    }
    cout<<ans;
    return 0;
}
