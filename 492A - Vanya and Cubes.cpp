#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n,level=1,current=2,ans=0;
    cin>>n;
    while (true)
    {
        if(n>=level)
        {
            n -=level;
            level +=current;
            ++current;
            ++ans;

        }
        else{
            break;
        }
    }
    cout<<ans;
    return 0;
}
