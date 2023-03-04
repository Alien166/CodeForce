#include <iostream>

using namespace std;
bool arry[101];
int main()
{
   int n,m;
   cin>>n>>m;
   bool ans=true;
   for(int i=0;i<n;++i)
   {
       int x;
       cin>>x;
       for(int i=0;i<x;++i)
       {
           int y;
           cin>>y;
           arry[y-1]=1;
       }
   }
   for(int i=0;i<m;++i)
   {
       if(!arry[i]){
       ans=false;
       }
   }
    if(ans){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    

    return 0;
}
