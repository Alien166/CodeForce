#include<bits/stdc++.h>
using namespace std;
float n,a,b,c;
int main()
{cin>>n;
for(;n--;)
{cin>>a>>b>>c;
cout<<ceil(fabs(((a+b)/2)-b)/c)<<endl;}}
