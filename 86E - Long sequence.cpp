#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <string>
#include <cstring>
#include <cmath>
#include <set>
#include <map>
#include <cstdio>
#include <stdlib.h>
#include <stack>
#include <numeric>
#include <bitset>

typedef long long ll;
#define MAX 25
using namespace std;
int n,m;
int k;
#define INF 2147483647
#define MOD 1000000009
#define EPS 1e-8
#define G 9.8
#define PI acos(-1)
bool debug = false;

int mat[51][51][51];
ll T, fac[51];
int c[51],a[51],t[51];
void mul(int a[51][51], int b[51][51], int c[51][51]) {
    for(int i=1;i<=n;i++)for(int j=1;j<=n;j++){
        c[i][j]=0;
        for(int p=1;p<=n;p++) {
            c[i][j] ^= a[i][p] & b[p][j];
        }
    }
}
bool isU(ll k){
    memset(a, 0, sizeof(a)); a[n]=1;
    for(int i=0;k>0;i++,k>>=1)if(k&1){
        for(int j=1;j<=n;j++){
            t[j]=0;
            for(int y=1;y<=n;y++) t[j]^=a[y] & mat[i][y][j];
        }
        for(int j=1;j<=n;j++) a[j]=t[j];
    }
    for(int i=1;i<n;i++)if(a[i]) return false;
    return a[n]==1;
}
bool judge() {
    memset(mat[0], 0, sizeof mat[0]);
    for(int i=2;i<=n;i++)mat[0][i][i-1]=1;
    for(int i=1;i<=n;i++)mat[0][i][n]=c[n+1-i];
    for(int i=1;i<n;i++) mul(mat[i-1], mat[i-1], mat[i]);
    if(!isU(T)) return false;
    for(int i=1;i<=m;i++) if(isU(fac[i])) return false;
    return true;
}
int main()
{
    scanf("%d", &n);
    ll tmp = (1LL<<n)-1;
    T=tmp;
    for(ll i=2;i*i<=tmp;i++)if(tmp%i==0) {
        fac[++m] = T/i;
        while(tmp%i==0)tmp/=i;
    }
    if(tmp>1) fac[++m]=T/tmp;
    do {
        for(int i=0;i<n;i++) c[i+1]=rand()&1;
        c[rand()%n+1]=1;
    }while(!judge());
    for(int i=0;i<n;i++) printf("%d ", c[i+1]);
    puts("");
    for(int i=0;i<n;i++)printf("%d ", a[i+1]);
    return 0;
}
