#include<bits/stdc++.h>
using namespace std;
int a[1000000];
int b[100];
void seive(int n)
{

  //int limit=sqrt(n)+2;
  for(int i=2;i<=n;i++)
  {
    if(a[i] ==0 )
    {
      for(int j=i+i; j<=n; j=j+i)
        a[j]=1;
    }
  }
}

int main()
{
  int t;
  cin>>t;
  seive(10000);
  for(int k=1;k<=t;k++)
  {
    
    string s;
    cin>>s;
    int n=s.size();
    //int b[100]={0};
    for(int i=0;i<n;i++)
    {
      b[s[i]]++ ;
    }
    printf("Case %d: ",k);
    int flag=0;
    for(int i=1;i<=128;i++)
    {
        if(b[i]>1)
          {
              for(int j=2;j<n;j++)
              {
                if(a[j]==0 && b[i]==j )
                  
                  {
                      printf("%c",i);
                      flag=1;
                  }
              }
          }
          
    }
    if(flag==0)
      cout<<"empty";
    cout<<endl;
    
  //for(int m=0;m<=100;m++)
  //b[m]=0;
  }
  }