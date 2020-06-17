#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n,x,i;
    cin>>n;
    int a[n-1];
     int b[n]={0};
    for(i=0;i<n-1;i++)
    {
        cin>>a[i];
        x=a[i];
        b[x-1]=1;
    }
   for(i=0;i<n;i++)
    {
        if(b[i]==0)
        {
            cout<<i+1;
            break;
        }}


return 0;
}
