#include<bits/stdc++.h>
using namespace std;
int a,b,g,x,y;
int main()
{
cin>>a>>b>>x>>y;
g=__gcd(x,y);
x/=g;
y/=g;
a=min(a/x,b/y);
cout<<x*a<<' '<<y*a;
}
