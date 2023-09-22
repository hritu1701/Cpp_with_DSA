#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>v(6);

    cout<<"Enter elements of array: ";
    for(int i=0;i<6;i++)
    {
        cin>>v[i];
    }

    cout<<"The array is: ";
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    int x,count;
    cout<<"Enter the element to count : ";
    cin>>x;

    count=0;

   for(int i=0;i<v.size();i++)
   {
    if(v[i]>x)
    {
        count++;
    }
   }
cout<<"The count of element greater than "<<x<<" is "<<count;

return 0;
}
