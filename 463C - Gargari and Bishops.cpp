#include <iostream>
#include <cstdio>
using namespace std;
__int64 n,t,r,a[2001][2001],v1[2001<<1],v2[2001<<1],x[]={1,2},y[]={1,1},p[2];
int main()
{
    cin>>n;
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) scanf("%I64d",&a[i][j]),v1[i+j]+=a[i][j],v2[i-j+n]+=a[i][j];
    for(int i=0;i<n;i++) for(int j=0;j<n;j++){
      t=(i+j)&1;
      r=v1[i+j]-a[i][j]+v2[i-j+n];
      if(r>p[t])x[t]=i+1,y[t]=j+1,p[t]=r;
    }
    printf("%I64d\n%I64d %I64d\n%I64d %I64d",p[0]+p[1],x[0],y[0],x[1],y[1]);
    return 0;
}
