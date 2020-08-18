#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);

int n;
cin>>n;
int d[n+1]={0};
d[0]=1;
for(int i=1;i<=n;i++)
   {for(int j=1;j<=6 && i-j>=0;j++)
    {
      (d[i] += d[i-j]);
      d[i] %= 1000000007;
    }}
    cout<<d[n];
return 0;}
