#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cout<<"Enter no of rows: ";
    cin>>r;   //row
    cout<<"Enter no of columns: ";
    cin>>c;  //col


    int** arr = new int* [r];

    for(int i=0;i<r;i++)
    {
        arr[i]=new int[c];
    }

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<endl;
     for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

//releasing memory
      for(int i=0;i<r;i++)
    {
        delete []arr[i];
    }
    delete []arr;

}