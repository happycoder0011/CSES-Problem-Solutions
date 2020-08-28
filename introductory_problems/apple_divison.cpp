#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;
int sum=0;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
int n;
cin>>n;
int a[n],ans=INT_MAX;
for(int i=0;i<n;i++)
{
    cin>>a[i];
    sum += a[i];
}
for(int i=0;i<(1<<n);i++)
{

    int c=0;
    for(int j=0;j<n;j++)
    {
        if(i<<j & 1)
            c += a[j];
    }
    ans =min(ans,abs(sum-c-c));
}
cout<<ans;
return 0;}
