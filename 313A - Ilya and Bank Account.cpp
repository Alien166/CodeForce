#include <bits/stdc++.h>
using namespace std;
#define long long ll;
const int MAXN = 2e5 + 5;
int main() {
    int n;
    cin>>n;
    cout<<(n>0?n:(max(n/100*10+n%10,n/10)));
    return 0;
}
