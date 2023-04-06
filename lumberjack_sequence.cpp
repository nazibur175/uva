#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  int a[10],b[10];
  cout<<"Lumberjacks:"<<endl;
  while(t--)
  {
    string s1,s2,s3;
    for(int i=0;i<10;i++)
      {
        cin>>a[i];
        b[i]=a[i];
        s1.push_back(a[i]);
      }
      sort(b,b+10);
      for(int i=0;i<10;i++)
      {
        s2.push_back(b[i]);
      }
      sort(b, b + 10, greater<int>());
      for(int i=0;i<10;i++)
      {
        s3.push_back(b[i]);
      }
      if(s1==s2 || s1==s3)
        cout<<"Ordered"<<endl;
      else 
        cout<<"Unordered"<<endl;
  }
  
}