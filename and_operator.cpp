#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    if((num%2==0)&&(num%3==0)) 
    {
        cout<<"True!";
    }
    else
    {
        cout<<"False!";
    }
}