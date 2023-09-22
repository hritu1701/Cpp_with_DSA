#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n,element;
    // cout<<"Enter the size of array: ";
    // cin>>n;
    vector<int>v;

cout<<"Enter the elements of array: ";
    for(int i=0;i<5;i++)
    {
        cin>>element;
        v.push_back(element);
    }

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;


//Inserting element

    v.insert(v.begin()+2,6);

    for(int ele:v)
    {
        cout<<ele<<" ";
    }
cout<<endl;

//Deleting element
    v.erase(v.end()-2);

    int idx=0;
    while(idx<v.size())
    {
        cout<<v[idx++]<<" ";
    }
cout<<endl;

}