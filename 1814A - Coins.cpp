#include <iostream>

using namespace std;

bool can_represent(long long n, long long k) {
    if (k % 2 == 0) {
        return n % 2 == 0;
    } else {
        return true;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        if (can_represent(n, k)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
