#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  for(int i=1;i<=t;i++)
  {
    string s1,s2,s3,s4;
    cin>>s1>>s2>>s3>>s4;

    
    int h1=(s1[0]-48)*10 +s1[1]-48;
    int m1=(s1[3]-48)*10 +s1[4]-48;
    int h2=(s2[0]-48)*10 +s2[1]-48;
    int m2=(s2[3]-48)*10 +s2[4]-48;
    int h3=(s3[0]-48)*10 +s3[1]-48;
    int m3=(s3[3]-48)*10 +s3[4]-48;
    int h4=(s4[0]-48)*10 +s4[1]-48;
    int m4=(s4[3]-48)*10 +s4[4]-48;

    h1=h1*60+m1;
    h2=h2*60+m2;
    h3=h3*60+m3;
    h4=h4*60+m4;


    if(h2 < h3 || h4 < h1)
            cout<<"Case " <<i<<": Hits Meeting"<<endl;
        else
            
             cout<<"Case " <<i<<": Mrs Meeting"<<endl;


  }



}