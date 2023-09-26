#include<iostream>
#include<climits>
using namespace std;

int largestNumberIndex(int arr[],int size)
{
    int MAX=INT8_MIN;
    int largestIndex=-1;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>MAX)
        {
            MAX=arr[i];
            largestIndex=i;
        }
    }
    return largestIndex;
}

int main()
{
    
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;

    int arr[size];
    cout<<"Enter the array elements: ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

int indexOfLargest = largestNumberIndex(arr,size);
cout<<"Largest Element: "<<arr[indexOfLargest]<<endl;

int l=arr[indexOfLargest];

for(int i=0;i<size;i++)
{
    if(arr[i]==l)
    {
        arr[i]=-1;
    }
}


int secondLargestElement= largestNumberIndex(arr,size);
cout<<"Second Largest Element: "<<arr[secondLargestElement]<<endl;


}