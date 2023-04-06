#include<iostream>
using namespace std;
int main()
{
  int n,m,x,y;
  while(scanf("%d%d",&x,&y)!=EOF)
  {
    
    if(x==-1 && y==-1)
    return 0;
    int cup=0,cdown=0;

    if(x<=y)
      {
        cup=y-x;
      }
    if(x>y)
    {
      cup=(100-x)+y;
    }

    if(x>y)
    {
      cdown=x-y;
    }
    else 
      cdown=x+(100-y);

    


    if(cup<cdown)
      cout<<cup<<endl;
    else 
      cout<<cdown<<endl;
  }
}