#include<bits/stdc++.h>
using namespace std;
int GCD( int a, int b )
{
    if( b == 0 ) 
      return a;
    else return GCD( b, a % b );
}

int main()
{
  int N,i,j;
  while(cin>>N,N)
  {
     int G=0;
    for(i=1;i<N;i++)
    for(j=i+1;j<=N;j++)
    {
      G+=GCD(i,j);
    }
      cout<<G<<endl;
  }
}