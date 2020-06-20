#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;
#define for(i,a,b) for(int i=a;i<=b;i=i+2)
int main()
{
ios::sync_with_stdio(0);
cin.tie(0);


int n;
cin>>n;
if(n==1)
    cout<<1<<endl;
else
    if(n<4)
    cout<<"NO SOLUTION"<<endl;
else
{

    for(i,2,n)
    {
        cout<<i<<" ";
    }
    for(i,1,n)
    {
        cout<<i<<" ";
    }
}


return 0;}
