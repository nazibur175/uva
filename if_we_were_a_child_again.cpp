#include<iostream>
using namespace std;
int main()
{
  long long int n1,n2;
  char s;
  while(scanf("%lld %c %lld",&n1,&s,&n2))
  {
    if(s=='/')
      cout<<n1/n2<<endl;
    else 
      cout<<n1%n2<<endl;
  }
}