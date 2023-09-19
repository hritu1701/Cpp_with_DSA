#include<iostream>
using namespace std;
int main()
{
    int r;
    cout<<"Enter the row number: ";
    cin>>r;

    for(int i=1;i<=r;i++)
    {
        for(int j =1;j<r-i+1;j++) // thing to remember is condition.
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
