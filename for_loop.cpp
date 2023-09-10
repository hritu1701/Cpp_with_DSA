#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    
    int sum=0;
    cout<<"The sum is: ";
    for(int i=0;i<num;i++)
    {
        sum+=i;     
    }
    cout<<sum<<" ";
}