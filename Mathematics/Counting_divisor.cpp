#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
for(int j=0;j<t;j++){
int n,c=0;
cin>>n;
for(int i=1;i<=n;i++)
{
    if(n%i==0)
        c++;
}
cout<<c<<endl;
}
return 0;}

