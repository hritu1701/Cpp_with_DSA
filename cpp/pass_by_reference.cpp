#include<iostream>
using namespace std;

void changeValue(int &z,int &y)
{
    z=100;
    y=99;
}

int main()
{
  int p=10;
  int q=9;

  changeValue(p,q);
  cout<<p<<" "<<q;
   
}