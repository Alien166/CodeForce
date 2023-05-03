#include <bits/stdc++.h>
    using namespace std;
    int main() {
        int n,power=1;
        cin>>n;
        n= (n-1)%20+1; //compute n module 20

        for(int i=0;i<n;++i){
            power=(power * 5) % 100;   // print the last two digits
        }
        cout<<power<<endl;
        return 0;

}
