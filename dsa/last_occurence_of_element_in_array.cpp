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
    cout<<"Enter the element to find last occurence: ";
    cin>>x;

    occurence=-1;

    for(int i=0;i<v.size();i++)
    {
        if(v[i]==x)
        {
            occurence=i;
        }
    }
cout<<"The position is: "<<occurence;

return 0;
}
