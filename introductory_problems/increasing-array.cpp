#include<bits/stdc++.h>
//this includes iostream | vector | algorithm
using namespace std;
//makes input output efficient
//ios::sync_with_stdio(0);
//cin.tie(0);

int main()
{
 int n,m;
 cin>>n;
 int a[n];
 for(int i=0;i<n;i++)
 {
     cin>>a[i];
 }
 m=0;
 for(int i=1;i<n;i++)
 {
     if(a[i]<a[i-1])
        m=m+a[i-1]-a[i];
 }
 cout<<m<<endl;

    return 0;
}
