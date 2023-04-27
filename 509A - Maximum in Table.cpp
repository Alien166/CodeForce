#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int maxVal = 1;
    int table[11][11];

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || j == 1) { 
                table[i][j] = 1;
            } else { 
                table[i][j] = table[i-1][j] + table[i][j-1];
                if (table[i][j] > maxVal) { 
                    maxVal = table[i][j];
                }
            }
        }
    }

    cout << maxVal << endl; 
    return 0;
}
