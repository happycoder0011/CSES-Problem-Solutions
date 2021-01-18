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

int dp[x+1]={0};
dp[0]=1;
for(int i=0;i<n;i++)
{
    for(int j=1;j<=x;j++)
    {
        if(c[i]>j) continue;
        dp[j] = (dp[j]+dp[j-c[i]])%1000000007;

    }
}
cout<<dp[x]%1000000007;
return 0;}
