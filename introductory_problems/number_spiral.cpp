#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;
#define for(i,a,b) for(int i=a;i<b;i++)

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
ulli t,x,y;
cin>>t;
for(i,0,t)
{
    cin>>x>>y;
    ulli hi = max(x,y)*max(x,y);
    ulli low = (max(x,y)-1)*(max(x,y)-1) +1;
    ulli u =max(x,y),ans;

    if(u%2==0)
    {
        if(x==u)
        {
            ans = hi-y+1;
        }
        else
        {
            ans = low+x-1;
        }
    }
    else

    if(u%2!=0)
    {
        if(x==u)
        {
           ans = low+x-1;
        }
        else
        {
            ans = hi-y+1;
        }
    }


   cout<<ans<<endl;
}

return 0;}
