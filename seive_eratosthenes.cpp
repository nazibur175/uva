#include<bits/stdc++.h>
using namespace std;
int a[100000000];
void seive()
{
  int n=100000000;
  a[1]=1;
  for(int i=2;i<=n;i++)
  {
    if(a[i]==0 )
    {
      for(int j=i+i; j<=n; j=j+i)
        a[j]=1;
    }
  }
}

int main()
{
  int t;
  cin>>t;
  seive();
  while(t--)
  {
  int n;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
    if(a[i]==0)
    {
       cout<<i<<endl;
    }
  }
  }
}