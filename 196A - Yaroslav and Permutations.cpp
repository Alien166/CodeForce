#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    bool flag=1;
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    map<int, int> freq;
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    bool possible = true;
    for (auto it = freq.begin(); it != freq.end(); it++) {
        if (it->second > (n+1)/2) {
            possible = false;
            break;
        }
    }

    if (possible) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
