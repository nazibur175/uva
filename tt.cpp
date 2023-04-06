#include<bits/stdc++.h>
using namespace std;
long int recursion(long int x){
  if(x==0)
    return 1;
  else 
    return recursion(x/2)+recursion(x/3);

}
int main()
{
  long int n;
  cin>>n;
  cout<<recursion(n)<<endl;
  //main();

}