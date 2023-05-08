#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
   char s[101][101];
   ll i,j,n,m;
    while (cin>>n>>m)
    {
        for(i=0;i<n;++i)
        {
            for(j=0;j<m;++j)
            {
                cin>>s[i][j];
            }
        }
        bool flag=1;
        for( i=1;i<n;++i)
        {
            for(j =0;j<m;++j)
            {
                if(s[i][j]==s[i-1][j])
                {
                    flag=0;
                    break;

                }
            }
        }
        for( i=0;i<n;++i)
        {
            for(j =1;j<m;++j)
            {
                if(s[i][j]!=s[i][j-1])
                {
                    flag=0;
                    break;

                }
            }
        }
        if(flag==1){
            cout<<"Yes\n";
        }else{
            cout<<"No\n";
        }
    }

    return 0;
}
