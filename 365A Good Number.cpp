#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n,k,count1=0,count2=0,res=-1;
    cin>>n>>k;
    string str,ss="0123456789";
    while (n--)
    {
        cin>>str;
        for(int i=0;i<=k;i++)
        {
            res=str.find(ss[i]);
                if(res!=-1){
                    count1++;
                    res=-1;
                }
        }
        if(count1>=k+1)
            count2++;

        count1=0;
    }
    cout<<count2<<"\n";
    return 0;
}
