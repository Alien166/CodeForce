#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int n;
    cin>>n;
    while (n--) {
        int a,b,c;
        cin>>a>>b>>c;
        if(a < b && b < c) {
            cout<<"STAIR\n";
        } else if(a < b && b > c ) {
            cout<<"PEAK\n";
        } else {
            cout<<"NONE \n";
        }
    }
    return 0;
}
