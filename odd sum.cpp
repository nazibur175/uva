#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
for(int i=1;i<=n;i++)
{
  int x,y;
  cin>>x>>y;
  int sum=0;
  for(int j=x;j<=y;j++)
  {
      if(j%2==1)
        sum+=j;
  }
  printf("Case %d: %d\n",i,sum);

}
return 0;
}

