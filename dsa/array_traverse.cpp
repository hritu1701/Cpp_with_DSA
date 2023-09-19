#include<iostream>
using namespace std;

int main()
{
    // int arr[]={1,2,3,5,4,5,3,5,7,9,6,6};
    // int size=sizeof(arr)/sizeof(arr[0]);

int size;
int arr[5];

cout<<"Enter the size of array: ";
cin>>size;

for(int i=0;i<size;i++)
{
    cin>>arr[i];
}
cout<<endl;

//loop to traverse array using for loop
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

//loop for traverse whole array element using for each loop
    for(int ele:arr)
    {
        cout<<ele<<" ";
    }
    cout<<endl;
//traverse array using while loop
    int j=0;
    while(j<size)
    {
        cout<<arr[j]<<" ";
        j++;
    }
    return 0;
}
