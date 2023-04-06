#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  while(cin>>n)
    {
      if(n==0)
        return 0;
      int sum=(n*(n+1)*(2*n+1)/6);
      cout<<sum<<endl;
    }
}