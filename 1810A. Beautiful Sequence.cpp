#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    scanf("%d",&T);
    while(T--){
        int n;
        scanf("%d",&n);
        int b=0;
        for(int i=1;i<=n;++i){
            int t;
            scanf("%d",&t);
            if(t<=i)b=1;
        }
        puts(b?"YES":"NO");
    }
}
