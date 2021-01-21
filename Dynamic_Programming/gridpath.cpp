
#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;
#define mod 1000000007
int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
int n;
cin>>n;
char a[n][n];
ulli b[n][n];
memset(b, -1, sizeof(b));

for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        cin>>a[i][j];
        if(a[i][j]=='*')
        {
            b[i][j]=0;
        }

    }

}
if(b[n-1][n-1]==0 || b[0][0]==0 || (n<2 && b[0][0]==0) )
{
    cout<<0;
    return 0;
}
b[n-1][n-1]=1;
for(int i=n-1;i>=0;i--)
{
    for(int j=n-1;j>=0;j--)
    {
        if(b[i][j]==-1){
                if(j==n-1)
                {
                   b[i][j] =  b[i+1][j];
                }
                else
                if(i==n-1)
                {
                   b[i][j] =  b[i][j+1];
                }
                else
                {
                   b[i][j] =  (b[i+1][j]%mod+b[i][j+1]%mod)%mod;
                }
    }}
}

cout<<b[0][0];
return 0;}

