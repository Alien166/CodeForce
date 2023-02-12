#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string str;
    cin>>str;
    int ans=1;
    for(int i=0;i<str.length();++i)
    {
     if(str[i]=='W'&&str[i+1]=='U'&&str[i+2]=='B')
     {
        i +=2;
        if(!ans)
        {
            cout<<" ";
        }
         continue;
     }
     else
     {
         ans=0;
         cout<<str[i];
     }
    }
    return 0;
}
