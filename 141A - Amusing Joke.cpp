#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str1,str2,str3,str4;
    cin>>str1>>str2>>str3;
    str4=str1+str2;
    sort(str3.begin(),str3.end());
    sort(str4.begin(),str4.end());
    if(str4==str3){
     cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }    
    return 0;
}
