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
    ulli x,y;
    cin>>x>>y;

    ulli m=max(x,y);
    if(m%2==0)
    {
        if(x>=y)
        {
          ulli n=min(x,y)-1;
        }
        else
        {

        }
    }


    cout<<pow(m,2)-n<<endl;

}

return 0;}
