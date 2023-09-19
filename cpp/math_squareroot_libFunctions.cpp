#include<iostream>
#include<cmath>
using namespace std;

float SquareRoot(int a)
{
    float value=sqrt(a);

    return value;
}

int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    cout<<"The square root of "<<num<<" is: "<<SquareRoot(num);

    return 0;
}