#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;
#define for(i,a,b) for(int i=a;i<b;i++)

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);

ulli n,x;
cin>>n>>x;
ulli a[n];
for(i,0,n)
{
    cin>>a[i];
}
for(i,0,n)
{
    for(j,i+1,n)
    {
        if(a[i]+a[j]==x)
        {
            cout<<i+1<<" "<<j+1;
            return 0;
        }
    }
}
return 0;}
