#include<bits/stdc++.h>
using namespace std;
int a[100000000],b[100000000];
void seive(int n)
{
  //int limit=sqrt(n)+2;
  a[1]=1;
  for(int i=2;i<=n;i++)
  {
    if(a[i] ==0 )
    {
      for(int j=i+i; j<=n; j=j+i)
        a[j]=1;
    }
  }
  
  for(int i=1;i<=1000;i++)
  {
    if(a[i]==0)
    {
       int z=i;
       int sum=0;
       while(z>0)
       {
         sum=sum+ z%10 ;
         z=z/10;
       }

      if(a[sum]==0)
      {
        b[sum]=2;
        cout<<i <<" "<<b[sum]<<endl;
        
      }

      
    }
  }




}

int main()
{
  int t;
  cin>>t;
  seive(100000000);
  while(t--)
  {
  int m,n;
  cin>>m>>n;
  int c=0;
  for(int i=m;i<=n;i++)
  {
    if(b[i]==2)
      {
        
        cout<<i <<" "<<b[i]<<endl;
        
      }
      //if(b[i]==2)
      //{
        //cout<<i<<endl;
      //}
      //c++;
  
  }
    
}
}