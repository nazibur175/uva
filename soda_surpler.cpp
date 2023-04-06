#include<iostream>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
     int a,b,c;
     cin>>a>>b>>c;

     int count=0;
     int x=a+b;
     while(x>=c)
     {
        count=count+x/c;  
        x=x/c+x%c;
     }

    cout<<count<<endl;
   }
}