#include<iostream>
using namespace std;

int main()
{
    int arr[]={6,4,5,1};
    int size=sizeof(arr)/sizeof(arr[0]);

   int max=arr[0];

   for(int i=1;i<size;i++)
   {
    if(arr[i]>max)
    {
        max=arr[i];
    }
   }

   cout<<"The maximum element is: "<<max;

}
