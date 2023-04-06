#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  vector<long long int>v1;
  vector<long long int>v2;
  while(n--)
  {
    long long int x;
    cin>>x;
    v1.push_back(x);
  }
  v2=v1;
  sort(v2.begin(), v2.end());
  for(int i=1;i<v1.size();i++)
    {
        v1[i]=(v1[i]+v1[i-1]);
    }
  
  for(int i=1;i<v2.size();i++)
    {
        v2[i]=v2[i]+v2[i-1];
    }

  int t;
  cin>>t;
  while(t--)
  {
    int a,b,c;
    cin>>a>>b>>c;
    
    if(a==1)
    {
      if((b-2)<0)
      cout<<v1[c-1]<<endl;
      else 
      cout<<v1[c-1]-v1[b-2]<<endl;
    }
    
    else 
    {
      if((b-2)<0)
      cout<<v2[c-1]<<endl;
      else 
      cout<<v2[c-1]-v2[b-2]<<endl;
    }
  }

}