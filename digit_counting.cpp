#include<iostream>
using namespace std;
int a[10];
int main()
{
  int n;
  cin>>n;
  while(n--)
  {
    int x;
    cin>>x;
    for(int j=1;j<=x;j++)
    {
      int i=j;
        //cout<<i;
        while(i>0)
          {
            a[i%10]++ ;
            i=i/10;
          }
    }
    for(int i=0;i<10;i++)
    {
      cout<<a[i];
      a[i]=0;
      if(i<9)
      cout<<" ";
    }
    cout<<endl;
    
  }
}