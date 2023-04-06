#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  getchar();
  while(t--)
  {
    string s;
    getline(cin,s);
    int l=s.size();
    int m=sqrt(l);
    if(m*m!=l)
        cout<<"INVALID"<<endl;
    else 
      {
        for(int i=0;i<m;i++)
        for(int j=i;j<l;j+=m)
          cout<<s[j];
        cout<<endl;
      }
  }
}