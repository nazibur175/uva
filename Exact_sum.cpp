#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  while(scanf("%d",&n) !=EOF)
  {
    int a[n];
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
    int p;
    cin>>p;
    //sort(a,a+n);
    int max=1000001;
    int x=0;
    int y=0;
    for(int i=0;i<n-1;i++)
      {
      for(int j=i+1;j<n;j++)
      {
          if(a[i]+a[j]==p)
      {
        if(abs(a[j]-a[i])<max)
        {
          x=a[i];
          y=a[j];
        }
        max=a[j]-a[i];
      }
      }
      }
      cout<<"Peter should buy books whose prices are "<<x<<" and "<<y<<"."<<endl<<endl;
  }
  
}