#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  while(n--)
  {
     int r;
     cin>>r;
     if(r>=1900){
         cout<<"Division 1"<<endl;
     }
     else if(r>=1600&&r<1900){
         cout<<"Division 2"<<endl;
     }
     else if(r>=1400&&r<1600){
         cout<<"Division 3"<<endl;;
     }
     else{
         cout<<"Division 4"<<endl;
     }
  }
    return 0;
}
