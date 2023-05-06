#include <iostream>
 using namespace std;
int main(){
  int n;
  cin>>n;
  cout<<n/7*2+(n%7==6)<<' '<<(n+5)/7*2+(n%7==1);
}
