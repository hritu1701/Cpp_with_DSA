#include<iostream>
using namespace std;

void merge(int* arr,int s,int e)
{
    int mid=(s+e)/2;
    int l1=mid-s+1;
    int l2=e-mid;

    int* first=new int[l1];
    int* second=new int[l2];

    int mainArrayIndex=s;
    for(int i=0;i<l1;i++)
    {
        first[i]=arr[mainArrayIndex++];
    }
    
    mainArrayIndex=mid+1;
    for(int i=0;i<l2;i++)
    {
        second[i]=arr[mainArrayIndex++];
    }
    //Merging both arrays
    int index1=0;
    int index2=0;
    mainArrayIndex=s;

    while(index1<l1 && index2<l2)
    {
        if(first[index1]<second[index2])
        {
            arr[mainArrayIndex++]=first[index1++];
        }
        else
        {
            arr[mainArrayIndex++]=second[index2++];
        }
    }

    while(index1<l1)
    {
         arr[mainArrayIndex++]=first[index1++];
    }

    while(index2<l2)
    {
         arr[mainArrayIndex++]=second[index2++];
    }

    delete []first;
    delete []second;
}

void mergeSort(int *arr,int s,int e)
{
    if(s>=e)
    return;
    
    int mid=(s+e)/2;
    
    //Left part
    mergeSort(arr,s,mid);
    
    //Right part
    mergeSort(arr,mid+1,e);

    merge(arr,s,e);
   

}
int main()
{
    int arr[5]={2,6,1,4,9};
    int size=5;

    mergeSort(arr,0,size-1);

    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}