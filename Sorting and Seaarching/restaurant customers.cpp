#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;
#define for(i,a,b) for(int i=a;i<b;i++)

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);

int n;
cin>>n;
int a[n]={0},x,y;
for(i,0,n)
{
    cin>>x>>y;
    for(j,x-1,y)
    {
        a[j]++;
    }
}
int *l;
l=max_element(a,a+n);
cout<<l;


return 0;}

