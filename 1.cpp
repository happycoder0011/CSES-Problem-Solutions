#include<stdio.h>
#include<math.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
   unsigned long long  int n;
    cin>>n;
    cout<<n;
    while(n!=1)
    {
        if(n%2==0)
    {
        n=n/2;
        cout<<" "<<n;
    }
    else
    {
        n=n*3+1;
         cout<<" "<<n;
    }
    }


    return 0;
}
