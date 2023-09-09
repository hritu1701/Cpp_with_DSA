#include<iostream>
using namespace std;
int main()
{
    int a,b;
    int temp;

    cout<<"Enter number a:";
    cin>>a;

    cout<<"Enter number b:";
    cin>>b;

    temp=b;
    b=a;
    a=temp;

    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b;

    return 0;
}