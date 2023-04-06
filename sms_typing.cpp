#include<bits/stdc++.h>
using namespace std; 
int main()
{
  int t;
  cin>>t;
  getchar();
  for(int j=1;j<=t;j++)
  {
     string s;
     getline(cin,s);
    int c=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='a' || s[i]=='d' || s[i]=='g' || s[i]=='j' || s[i]=='m' || s[i]=='p' || s[i]=='t' || s[i]=='w' || s[i]==' ')
            c=c+1;
        else if(s[i]=='b' || s[i]=='e' || s[i]=='h' || s[i]=='k' || s[i]=='n' || s[i]=='q' || s[i]=='u' || s[i]=='x')
            c=c+2;
        else if(s[i]=='c' || s[i]=='f' || s[i]=='i' || s[i]=='l' || s[i]=='o' || s[i]=='r' || s[i]=='v' || s[i]=='y')
            c=c+3;
        else if(s[i]=='s' || s[i]=='z')
            c=c+4;
    }
    printf("Case #%d: %d\n",j,c);
  }
}