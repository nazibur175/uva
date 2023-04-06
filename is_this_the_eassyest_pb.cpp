#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  for(int j=1;j<=t;j++)
  {
    long long int a[3];
    for(int i=0;i<3;i++)
    {
      cin>>a[i];
    }
    sort(a,a+3);
    if((a[0]+a[1])>a[2])
      {
        if(a[0]==a[1] && a[1]==a[2])
            printf("Case %d: Equilateral\n",j);
        else if(a[0]==a[1] || a[1]==a[2])
            printf("Case %d: Isosceles\n",j);
        else 
            printf("Case %d: Scalene\n",j);
      }
    else 
      printf("Case %d: Invalid\n",j);
  }
}