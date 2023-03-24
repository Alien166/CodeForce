#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  ll n,money=0,fives=0,tens=0;
  int ans=1;
  cin>>n;
  while(n--){
      int x;  cin>>x;
      if(x==5){
          fives ++;
      }
      else if(x==10)
      {
          tens ++;
          if(fives>=1){
              fives --;
          }
          else{
              cout<<"NO"<<endl;
              ans=0;
              break;
          }
      }
      else if(x==20){
          if(tens>=1 && fives>=1){
              tens --;
              fives --;
          }
          else if(fives>=3){
              fives -=3;
          }
          else{
              cout<<"NO"<<endl;
              ans=0;
              break;
          }
      }
  }
  if(ans){
      cout<<"YES"<<endl;
  }






    return 0;
}
// double ->      it's a pointer to a int value;
// int x ->       it's a value of int x;
