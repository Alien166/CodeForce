#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  int a,b,c;
  cin>>a>>b>>c;
  int ma,mi;
  ma= max(a,b);
  ma=max(ma,c);
  mi=min(a,b);
  mi=min(mi,c);
  cout<<mi<<" "<<ma;
}
 
