#include <bits/stdc++.h>
using namespace std;
#define ll long long
// Function to solve the problem
void solveProblem() {
    // Your solution code goes here
    int a,b , moves;
    cin>>a>>b;
    int reminder = a % b;
    if( reminder == 0 ) {
        moves = 0;
    } else {
        moves = b - reminder ;
    }
    cout <<moves<<endl;
}

int main() {
    // You can customize this based on the problem's input requirements

    int testCases;
    cin >> testCases;
    while (testCases--) {
        solveProblem();
    }

    return 0;
}
