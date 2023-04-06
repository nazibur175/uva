#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  while(getline(cin,s))
  {
    for(int i=0;i<s.size();i++)
    {
      if(s[i]<65 || s[i]>90)
        cout<<s[i]; 
      else if(s[i]>=65 && s[i]<=67)
        cout<<"2";
      else if(s[i]>=68 && s[i]<=70)
        cout<<"3";
      else if(s[i]>=71 && s[i]<=73)
        cout<<"4";
      else if(s[i]>=74 && s[i]<=76)
        cout<<"5";
      else if(s[i]>=77 && s[i]<=79)
        cout<<"6";
      else if(s[i]>=80 && s[i]<=83)
        cout<<"7";
      else if(s[i]>=84 && s[i]<=86)
        cout<<"8";
      else if(s[i]>=87 && s[i]<=90)
        cout<<"9";
      
     }
     cout<<endl;
  }
}