#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n,x;
    cin>>n;
    while (n>0)
    {
        cin>>x;
        if(x==1)
        {
            cout<<"HARD"<<endl;
            return 0;
        }
        n--;
    }
    cout<<"EASY"<<endl;
    return 0;
}
