#include<iostream>
using namespace std;

void print(int arr[],int s,int e)
{
    for(int i=s;i<e;i++)
    {
        cout<<arr[i]<<" ";
    } cout<<endl;
}

bool binarySearch(int *arr,int s,int e,int k)
{
    cout<<endl;
    print(arr,s,e);
    //base case 
    if(s>e)
    return false;

// Finding mid value
    int mid=s+(e-s)/2;

    if(arr[mid]==k)
    return true;

//Recursive call
    if(arr[mid]<k)
    {
        return binarySearch(arr,mid+1,e,k);
    }
    else
    {
        return binarySearch(arr,s,mid-1,k);
    }
}

int main()
{
    int arr[6]={1,5,6,11,15,30};
    int size=sizeof(arr)/sizeof(arr[0]);
    int key=30;

    bool ans = binarySearch(arr,0,5,key);

    if(ans)
    {
        cout<<"Element found!";
    }
    else
    cout<<"Element not found!";
}