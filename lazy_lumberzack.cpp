#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  while(n--)
  {
    int a[3];
    for(int i=0;i<3;i++)
    {
      cin>>a[i];
    }
    sort(a,a+3);
    if(a[0]+a[1]>a[2] )
      cout<<"OK"<<endl;
    else 
      cout<<"Wrong!!"<<endl;

  }
}