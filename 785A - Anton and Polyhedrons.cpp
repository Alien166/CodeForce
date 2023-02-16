#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    int n;
    string str;
    while(cin>>n)
    {
        int sum=0;
        while(n--)
        {
        cin>>str;
        if(str=="Tetrahedron"){
            sum +=4;
        }
        else if(str=="Cube"){
            sum +=6;
        }
        else if(str=="Octahedron"){
            sum +=8;
        }
        else if(str=="Dodecahedron"){
            sum +=12;
        }
        else if(str=="Icosahedron"){
            sum +=20;
        }
    }
        cout<<sum<<endl;
  }
    return 0;
}
