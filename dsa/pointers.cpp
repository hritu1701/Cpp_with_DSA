#include<iostream>
using namespace std;

int main()
{

// Normal Pointer

    int num =5;
    int* p=&num;
    (*p)++;
    cout<<*p<<endl;

// Pointers in Arrays

    int arr[10]={0,9,2,1,7,0,1,6,5,8};
    cout<< *arr<<endl;
    cout<<*(arr+1) + 1<<endl;

    int i=3;
    cout<<i[arr]<<endl;
    cout<<sizeof(arr)<<" "<<&arr[1]<<endl;



}