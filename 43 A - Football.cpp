#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() 
{
    int n,goal(0);
    cin>>n;
    string team,winner;
    while (n--)
    {               
        if(goal!=0)
        {
            cin>>team;
            if(team==winner){
                goal +=1;
            }
            else{
                goal -=1;
            }
        }
        else
        {
            cin>>winner;
            goal=1;
        }
    }
    cout<<winner<<endl;
    return 0;
}
