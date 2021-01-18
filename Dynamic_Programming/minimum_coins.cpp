#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
int n,x;
cin>>n>>x;
int c[n];
for(int i=0;i<n;i++)
{
    cin>>c[i];
}

vector<long long> dp(x+1,INT_MAX);
dp[0]=0;

for(int j=1;j<=x;j++)
{
    for(int k=0;k<n;k++)
    {   if(c[k]>j) continue;
        dp[j] = min(dp[j],1+dp[j-c[k]]);
    }

}
if(dp[x]==INT_MAX)
{cout<<-1;}
else
{

cout<<dp[x];
}
return 0;}
