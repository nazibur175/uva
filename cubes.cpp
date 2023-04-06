#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  while(cin>>n)
  {
    if(n==0)
      return 0;
    int c=0;
    for(int i=1;i<=sqrt(n);i++)
    {
      for(int j=1;j<=sqrt(n);j++)
      {
        if(i*i*i-j*j*j==n)
          {
            cout<<i<<" "<<j<<endl;
            c++;
            break;
          }
      }
      if(c==1)
        break;
    }
    if(c==0)
      cout<<"No solution"<<endl;
    
  }
}