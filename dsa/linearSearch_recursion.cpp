#include<iostream>
using namespace std;

bool linearSearch(int arr[],int size,int key)
{
    if(size==0)
    {
        return false;
    }
    if(arr[0]==key)
    {
        return true;
    }
    else
    {
        bool ans = linearSearch(arr+1,size-1,key);
        return ans;
    }
}

int  main()
{
    int arr[5]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int key=9;

    bool ans= linearSearch(arr,size,key);

    if(ans)
    {
        cout<<"Element present";
    }
    else
    cout<<"Element not present";
}