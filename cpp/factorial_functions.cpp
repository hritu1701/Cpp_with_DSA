#include<iostream>
using namespace std;

int Factorial(int n)
{
    int factorial=1;
    for(int i=2;i<=n;i++)
    {
        factorial*=i;
    }
    return factorial;
}
int main()
{
    int f;

    cout<<"Enter the number: ";
    cin>>f;

   cout<<"The factorial is: "<<Factorial(f);
    
}