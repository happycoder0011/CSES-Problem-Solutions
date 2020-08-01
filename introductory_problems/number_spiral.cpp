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
    ulli x,y,ans;
    cin>>x>>y;

    ulli m=max(x,y),m2;
    m2=m*m;
    if(m%2==0)
    {
        if(m==x)
        {
          ans = m2+1-y;
        }
        else
        {
         ans = m2-((m-1)*2)+x-1;
        }
    }
    else
    {
        if(m==x)
        {
          ans = m2-((m-1)*2)+y-1;
        }
        else
        {
         ans =m2+1-x;
        }
    }

cout<<ans<<endl;
}

return 0;}
