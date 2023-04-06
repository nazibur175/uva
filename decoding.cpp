#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  for(int i=1;i<=t;i++)
  {
    string s;
    char ch;
    cin>>s;
    printf("Case %d: ",i);
    for(int j=0;j<s.size();j++)
      if(s[j]>='A' && s[j]<='Z')
          {
            ch=s[j];
          }
      else 
      {
        int n=s[j]-'0';
        if(s[j+1]>='0' && s[j+1]<='9')
        {
            n=n*10+s[j+1]-'0';
            j++;
        }
        for(int k=0;k<n;k++)
          cout<<ch;
      }
    cout<<endl;
  }
}