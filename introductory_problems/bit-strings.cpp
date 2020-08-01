#include<stdio.h>
#include<math.h>
#include<iostream>
#include<algorithm>
#define ulli unsigned long long int
using namespace std;
ulli power(ulli a,ulli b,ulli c)
{
    ulli ans = 1;
    a= a%c;
    if(a==0)
        return 0;
    while(b>0)
    {
        if(b&1)//odd check
            ans = (ans*a)%c;

        b=b>>1;//even so y=y/2
        a = (a*a)%c;
    }
    return ans;
}
int main()
{
 ulli b,ans,a=2,c=1000000007;
 cin>>b;
 cout<<power(a,b,c);

    return 0;
}

