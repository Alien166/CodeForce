#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int testcase;
    cin>>testcase;
    string str,ch;
    for(int i=0;i<18;++i)
        ch+="Yes";
    while (testcase--)
    {
        cin>>str;
        if(ch.find(str)!=-1){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;

}
