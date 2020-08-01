#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
ulli n,ans,i;
cin>>n;
for(i=1;i<=n;i++)
{
    ans = (i*i*(i*i-1)/2) - (4*(i-1)*(i-2));
    cout<<ans<<endl;
}

return 0;}
