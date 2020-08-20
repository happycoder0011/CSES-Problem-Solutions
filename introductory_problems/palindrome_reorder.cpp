#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
string str;
int A[26]={0},j;
cin>>str;
for(int i=0;i<str.size();i++)
{

    j=str[i]-65;
    A[j]++;

}
char y;
int c=0,i;
for( i=0;i<26;i++)
{
   if(A[i]%2!=0 && c==0)
   {
       c=1;
       y=i+65;
   }
   else
    if(c==1 &&  A[i]%2!=0)
    {
        break;
    }
}
if(i!=26)
{
    cout<<"NO SOLUTION";
    return 0;
}
string ans;
for(int i=0;i<26;i++)
{


    j=A[i]/2;
    char d=i+65;
    while(j>0)
    {
        ans = ans+d;
        j--;
    }
}
ans = ans + y;
for(int i=25;i>=0;i--)
{


    j=A[i]/2;
    char d=i+65;
    while(j>0)
    {
        ans = ans +d;
        j--;
    }
}
cout<<ans;
return 0;}
