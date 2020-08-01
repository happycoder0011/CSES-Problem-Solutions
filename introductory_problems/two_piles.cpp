#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;
#define for(i,a,b) for(int i=a;i<b;i++)

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
ulli t;
cin>>t;
for(i,0,t)
{
    ulli a,b,c,d;
    cin>>a>>b;
    c= 2*a-b;
    d=2*b-a;
    if(c>=0 && d>=0 && c%3==0 && d%3==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

return 0;}
