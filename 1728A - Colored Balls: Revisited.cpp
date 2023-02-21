#include <bits/stdc++.h>
using namespace std;
#define loop(i,n,m) for(int i=n;i<m;i++)
#define ll long long int
#define ld long double
#define pb push_back
#define pob pop_back
#define mp make_pair
#define lb lower_bound
#define ub upper_bound
#define nl "\n"
#define max3(a,b,c) max(max((a),(b)),(c))
#define max4(a,b,c,d) max(max((a),(b)),max((c),(d)))
#define min3(a,b,c) min(min((a),(b)),(c))
#define min4(a,b,c,d) min(min((a),(b)),min((c),(d)))
#define max3(a,b,c) max(max((a),(b)),(c))
#define max4(a,b,c,d) max(max((a),(b)),max((c),(d)))
#define min3(a,b,c) min(min((a),(b)),(c))
#define min4(a,b,c,d) min(min((a),(b)),min((c),(d)))
const int mod=998244353;
const double pi = 3.141592653589793;
int main()
{
    int t,n,m;
    cin>>t;
    while (t--)
    {
        cin>>n;
        long long int arr[n],b[n];
        for(int i=0;i<n;++i)
        {
            cin>>arr[i];
            b[i]=arr[i];
        }
        sort(arr,arr+n);
        m=arr[n-1];
        for(int i=0;i<n;++i)
        {
            if(b[i]==m){
                cout<<i+1<<endl;
                break;
            }
        }
    }

        return 0;
}

