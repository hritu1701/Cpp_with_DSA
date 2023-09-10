#include<iostream>
using namespace std;
int main()
{
    int r;
    cin>>r;

    for(int i=1;i<=r;i++)     //operation for row
    {
        for(int j=i;j<=r;j++) //operation for column
        {
            cout<<j;
        }
    for(int k=1;k<=(i-1);k++)
    {
        cout<<k;
    }
    cout<<endl;
    }
    return 0;
    
}