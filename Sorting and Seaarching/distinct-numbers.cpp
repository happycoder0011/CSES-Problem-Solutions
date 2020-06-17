#include<stdio.h>
#include<math.h>
#include<iostream>
#include<algorithm>
#include <set>
#define ulli unsigned long long int
using namespace std;
int main()
{
 ulli n,x;
 set<int> my;
cin>>n;
for(int i=0;i<n;i++)
{
   cin>>x;
   my.insert(x);
}
cout<<my.size();

    return 0;
}


