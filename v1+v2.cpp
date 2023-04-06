#include<iostream>
using namespace std;

class project{
  public:
  int a,b,c;
  void input (int x, int y)
  {
    a=x;
    b=y;
  }

project operator +(project){
  project temp;
  temp.a=a+p.a;
  temp.b=b+p.b;
  return temp;
void show(){
  cout<<"a="<<a<<"b="<<b;
}
};


int main()
{
  project p1,p2,p3,p4,p5;
  p1.input(5,10);
  p2.input(20,30);
  p3.input(20,30);
  p4.input(2,2);
  //p5.input(20,30);
  p5=p1+p2*p3/p4;
  p5.show();
}