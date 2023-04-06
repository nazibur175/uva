#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    long long int sum=0;
    cin>>n;
    while(n--)
    {
      long long int x;
      cin>>x;
      sum=sum+x;


    }
    cout<<abs(sum)<<endl;
  }
}
