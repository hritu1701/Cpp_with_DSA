#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int arr[]={1,2,3,4,5,6};
    int size=sizeof(arr)/sizeof(arr[0]);


bool sortedFlag=true;
    for(int i=1;i<size;i++)
    {
        if(arr[i] <= arr[i-1])
        {
            sortedFlag=false;
        }
    }

    cout<<sortedFlag<<endl;


}