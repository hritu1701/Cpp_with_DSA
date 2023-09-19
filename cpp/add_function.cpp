#include<iostream>
using namespace std;

int add(int num1,int  num2)
{
    int sum = num1+num2;
    return sum;
}
int main()
{
    int a,b;

    cout<<"Enter first number: ";
    cin>>a;

    cout<<"Enter second number: ";
    cin>>b;
    
    cout<<"The sum is: "<<add(a,b);
}