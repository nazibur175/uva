#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  while(cin>>n,n)
  {
    string s;
    cin>>s;
    int l=s.size();
    int group=l/n;
    for(int i=0;i<l;i=i+group)
    {
      string temp;
      for(int j=i;j<i+group;j++)
      {
        temp.push_back(s[j]);
      }
      reverse(temp.begin(),temp.end());
      cout<<temp;
    }
    cout<<endl;
  }
}