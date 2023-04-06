#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  vector<long long int>v1;
  while(n--)
  {
    long long int x;
    cin>>x;
    v1.push_back(x);
  }
  for(int i=1;i<v1.size();i++)
    {
        v1[i]=(v1[i]+v1[i-1]);
    }
  
  int t;
  cin>>t;
  while(t--)
  {
    int a,b;
    cin>>a>>b;
    {
      if((a-2)<0)
      cout<<v1[b-1]<<endl;
      else 
      cout<<v1[b-1]-v1[a-2]<<endl;
    }
  }

}