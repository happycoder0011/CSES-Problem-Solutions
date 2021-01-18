#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;
vector<int> digit(int n)
{
    vector<int> ans;
    while(n>0)
    {
        ans.push_back(n%10);
        n=n/10;
    }
    return ans;
}
int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
int n;
cin>>n;
vector<long long> dp(n+1,INT_MAX);
dp[0]=0;
vector<int> dig;
for(int j=1;j<=n;j++)
{
    dig = digit(j);
    for(int k=0;k<dig.size();k++)
    {   if(dig[k]>j) continue;
        dp[j] = min(dp[j],1+dp[j-dig[k]]);
        cout<<dig[k]<<" ";
    }

}
if(dp[n]==INT_MAX)
{cout<<-1;}
else
{

cout<<dp[n];
}
return 0;}

