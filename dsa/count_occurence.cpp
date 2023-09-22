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

    int x,occurence;
    cout<<"Enter the element to count occurence: ";
    cin>>x;

    occurence=0;

    for(int ele:v)
    {
        if(ele==x)
        {
            occurence++;
        }
       
    }
cout<<"The count is: "<<occurence;

return 0;
}
