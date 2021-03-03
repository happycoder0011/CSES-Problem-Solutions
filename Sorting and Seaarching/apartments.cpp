#include <bits/stdc++.h>
using namespace std;
typedef long long int ulli;
#define for(i,a,b) for(ulli i=a;i<b;i++)

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);

ulli n,m,k;
cin>>n>>m>>k;
ulli a[n];
ulli b[m];
ulli c[m]={0};
for(i,0,n)
{
    cin>>a[i];
}
for(i,0,m)
{
   cin>>b[i];
}
sort(a,a+n);
sort(b,b+m);
int ans=0;
int z=0;
for(i,0,n)
{
    for(j,z,m)
    {

        if((b[j]>=a[i]-k && b[j]<=a[i]+k) && c[j]==0)
        {
            ans++;
            c[j] = 1;
             z = j+1;
            break;
        }
        else
        if(b[j]>a[i]+k)
            break;
    }
}
cout<<ans;
return 0;}
