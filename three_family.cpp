#include<iostream>
using namespace std; 
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    double x,y,z;
  cin>>x>>y>>z;
  
      double h=((x+y)/3.0);
      double p=z/h;
      cout<<(x-h)*p<<endl;
  }
  
}