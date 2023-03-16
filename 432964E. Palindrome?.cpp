#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int end=n-1;
    int b=0,c=0;


    for(int i =0;i<n/2;i++){
        if (s[b+i]!=s[end-i]){

            c++;

        }


    }
    if (c<2)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0 ;

}
