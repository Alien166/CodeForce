#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int n;
    cin>>n;
    for(int i=0;i<1000;++i){
        str +=to_string(i);
    }
    cout<<str[n];


    return 0;
}
