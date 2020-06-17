#include<stdio.h>
#include<math.h>
#include<iostream>
#include<algorithm>
#define ulli unsigned long long int
using namespace std;
int main()
{
 ulli n,ans;
cin>>n;
for(int i=0;i<n;i++)
{
    ans = pow(2,i+1);
    ans=ans%1000000007;
}
cout<<ans;

    return 0;
}

