#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int a,b,c,d,r1,r2,c1,c2,d1,d2;
    cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
    a=(c1+d1-r2)/2;
    b=c1-a;
    c=r1-a;
    d=r2-b;
    if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d&&a&&b&&c&&d&&a<=9&&b<=9&&c<=9&&d<=9)
        cout<< a <<' '<< c <<'\n' <<b <<' ' << d;
    else
        cout<<-1;
    return 0;
}
