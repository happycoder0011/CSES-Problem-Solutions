#include<bits/stdc++.h>
//this includes iostream | vector | algorithm
using namespace std;
//makes input output efficient
//ios::sync_with_stdio(0);
//cin.tie(0);

int main()
{
  unsigned long long  int n,i,m=0;
   cin>>n;
  unsigned long long  int a[n];
   for( i=0;i<n;i++)
   {
      cin>>a[i];
   }
   for(i=0;i<n;i++)
   {
      if(a[i+1]<a[i])
       {
         unsigned long long   int c=a[i]-a[i+1];
           m=m+c;
           a[i+1]=a[i+1]+c;
       }
   }
   cout<<m;


    return 0;
}
