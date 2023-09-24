#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int arr[]={1,2,3,4,5,6};
    int size=sizeof(arr)/sizeof(arr[0]);

    int  evensum=0;
    int oddsum=0;
    int answer;

    for(int i=0;i<size;i++)
    {
        if(i% 2 == 0)
        {
            evensum +=arr[i];
        }
        else if(i % 2 == 1)
        {
            oddsum +=arr[i];
        }
    }
answer=evensum-oddsum;
    cout<<"The difference is: "<<answer;


}