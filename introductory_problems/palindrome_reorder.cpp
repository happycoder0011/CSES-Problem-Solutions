#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
char str[1000000];
int A[26]={0},a[26]={0},j;
cin>>str;
for(int i=0;i<strlen(str);i++)
{
    if(str[i]<96)
    {
    j=str[i]-65;
    A[j]++;
    }
    else
    {
    j=str[i]-97;
    a[j]++;
    }
    }
sort(a,a+26,greater<int>());
sort(A,A+26,greater<int>());

if(a[0]==0 || A[0]==0 || (A[0]==1 && A[1]==0))
    cout<<"True"<<endl;
else
    cout<<"False"<<endl;
/*for(int i=0;i<26;i++)
{
   cout<<a[i]<<" ";
}
cout<<endl;
for(int i=0;i<26;i++)
{
   cout<<A[i]<<" ";
}*/


return 0;}
