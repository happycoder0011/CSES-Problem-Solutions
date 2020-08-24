#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;
bool check(string s,int i,int j)
{
    for(int k=i;k<j;k++)
    {
        if(s[k]==s[j])
            return 0;
    }
    return 1;
}
int permute(string s,int i,int n)
{
if(i==n-1)
{
    cout<<s<<endl;
    return 0;
}
else
{
    for(int j=i;j<n;j++)
    {
        if(check(s,i,j)){
        swap(s[i],s[j]);
        permute(s,i+1,n);
        swap(s[j],s[i]);
        }
    }
}
}
int factorial(int n){
return (n==0 || n==1)?  1 :  factorial(n-1)*n;
}
int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
string s;
cin>>s;
int n=s.size();



int a[26]={0};
for(int i=0;i<n;i++)
{
    a[s[i]-97]++;
}
int base=1;
for(int i=0;i<26;i++)
{
    base *= factorial(a[i]);
}
int top=factorial(n);
cout<<top/base<<endl;

permute(s,0,n);
return 0;}
