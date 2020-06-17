#include<bits/stdc++.h>
//this includes iostream | vector | algorithm
using namespace std;
//makes input output efficient
//ios::sync_with_stdio(0);
//cin.tie(0);

int main()
{
   string n;
   cin>>n;
   int c=0,ma=0;
   for(int i=0;i<n.length();i++)
   {
       if(n[i]==n[i+1])
       {
           c++;
           if(c>ma)
            ma=c;
       }
       else
        c=0;
   }
   cout<<ma+1;
    return 0;
}
