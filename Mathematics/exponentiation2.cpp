#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;
ulli power(ulli a,ulli b)
{
    ulli ans=1;
    if(a==0 && b!=0)
        return 0;
    if(b==0)
        return 1;

     while (b) {
        if (b & 1)
            ans = ans * a % 1000000007;
        b = b / 2;
        a = a * a % 1000000007;
    }

    return ans;
}
int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
ulli t,a,b,c;
cin>>t;
for(int i=0;i<t;i++)
{
    cin>>a>>b>>c;
    ulli m = power(b,c);
     m = m%1000000007;
    cout<<power(a,m)%1000000007<<endl;
}

return 0;}
