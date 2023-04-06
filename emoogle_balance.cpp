#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,t=0,c1,c0,x;
  while(scanf("%d",&n)!=EOF)
  {
    c1=0,c0=0;
    t++ ;
    if(n==0)
      return 0;
    for(int i=0;i<n;i++)
    {
      cin>>x;
      if(x==0)
      {
        c0++ ;
      }
      else 
        c1 ++ ;
    }
    cout<<"Case "<<t<<": "<<c1-c0<<endl;
    
  }
}