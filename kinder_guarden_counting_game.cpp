#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   getchar();
   while(getline(cin,s))
   {
      int flag=0,count=0;
      for(int i=0;i<s.size();i++)
      {
        if((s[i]>='A'&& s[i]<='Z') ||(s[i]>='a' && s[i]<='z'))
          flag=1;
        else 
          {
            count+=flag;
            flag=0;
          }
      }
      cout<<count<<endl;
   }
}