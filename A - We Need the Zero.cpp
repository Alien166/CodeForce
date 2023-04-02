#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, a, res = 0;
		cin >> n;
		for(int i = 0; i <= n-1; i++) {
			cin >> a;
			res = res xor a;
		}
		if(n % 2 == 0 && res != 0) cout << "-1\n";
		else cout << res << "\n";
	}
}
