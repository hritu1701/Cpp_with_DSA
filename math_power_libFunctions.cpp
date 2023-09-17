#include<iostream>
#include<cmath>
using namespace std;

int Power(int a,int b)
{
    int power=pow(a,b);
    return power;

}
int main()
{
    int a,b;
    cout<<"Enter the Base: ";
    cin>>a;
    cout<<"Enter the Power: ";
    cin>>b;

    cout<<"The calculated number is: "<<Power(a,b);
}