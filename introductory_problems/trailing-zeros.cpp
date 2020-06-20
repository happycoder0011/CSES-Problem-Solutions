#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;
#define f(i,a,b) for(int i=a;i<b;i=i+2)

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
int n;
cin>>n;
int x=n,c=0,fiv;
for(int i=1;x>=1;i++)
{
    fiv = pow(5,i);
    c = c+floor(n/fiv);
    x= n/fiv;
}
cout<<c<<endl;
return 0;}

