#include<bits/stdc++.h>
using namespace std;
int a,b,c;
main(){
	cin>>a>>b>>c;
 	cout<<min(a+2,min(b+1,c))*3-3;
}
