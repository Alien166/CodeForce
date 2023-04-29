#include <iostream>
#include <algorithm>
using namespace std;

int main() {
   int n,m,z;
   cin>>n>>m>>z;
   cout<<max({n,m,z})- min({n,m,z});
    return 0;
}
