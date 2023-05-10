#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
   string str;
   cin>>str;
   int j,i=str.find("0");
   if(i==-1)
       j=0;
   else
       j=i;
   str.erase(j,1);
   cout<<str<<"\n";
   return 0;
}
