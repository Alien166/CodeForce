#import<bits/stdc++.h>
using namespace std;
int i,j;
string s[4];
int main()
{
   for(;j<4;++j)
       cin>>s[j];
   for(i=0;i<3;++i)
   {
       for(j=0;j<3;++j)
       {
           if(s[i][j]+s[i+1][j]+s[i][j+1]+s[i+1][j+1]!=162)
           {
               cout<<"YES";
               return 0;
           }
       }
   }
    cout<<"NO";
}
