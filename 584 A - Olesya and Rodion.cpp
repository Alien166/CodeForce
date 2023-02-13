#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n,t;
    cin>>n>>t;
    if(n==1&&t==10){          // n less than t print (-1)
        cout<<-1;
    }
    else
    {
        cout<<t;
        if(t==10)             // if t==10 we will print n-2 ->  zero
        {
            for(int i=0;i<n-2;++i){
                cout<<0;
            }
        }
        else                   // if t less than 10 we will print n-1-> zero
        {
            for (int j = 0; j <n-1 ; ++j) {
                cout<<0;
            }
        }
    }
    return 0;

}
