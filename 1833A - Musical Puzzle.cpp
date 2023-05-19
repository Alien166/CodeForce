#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin>>s;
        set<int>x;
        for(int i=0;i+1<n;++i)    x.insert(s[i] << 8 | s[i+1]);
        cout<<x.size()<<"\n";

    }
    return 0;
}
