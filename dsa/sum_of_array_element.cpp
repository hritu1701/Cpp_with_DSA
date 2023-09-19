#include<iostream>
using namespace std;

int main()
{
    int arr[5];
    int size;
    
    cout<<"Enter the size of array:"<<endl;
    cin>>size;

    cout<<"Enter the elements: ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<endl;

    cout<<"The array is: ";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

int sum=0;
for(int i=0;i<size;i++)
{
    sum+=arr[i];
}
cout<<"The sum is "<<sum;
}