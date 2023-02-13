#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;
    cin>>n;
    string str;
    set<char> x,y;
    for(int i=0;i<n;++i)
    {
        cin>>str;
        for(int j=0;j<n;++j)
        {
            if (i == j || i  == n - 1-j) {
                x.insert(str[j]);
            }
            else{
                y.insert(str[j]);
            }
        }
    }
    if(x.size()==1 && y.size()==1 && *x.begin() != *y.begin()) {
       cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;

}
