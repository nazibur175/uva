#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a,b;
  while(cin>>a>>b,a,b)
  {
    int c=0;
    for(int i=a;i<=b;i++)
    {
      int m=sqrt(i);
      if(m*m==i)
        c++;
    }
    cout<<c<<endl;
  }
}