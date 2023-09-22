#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>arr;
    cout<<"Size: "<<arr.size()<<endl;
    cout<<"Capacity: "<<arr.capacity()<<endl;

    arr.push_back(10);
    cout<<"Size: "<<arr.size()<<endl;
    cout<<"Capacity: "<<arr.capacity()<<endl;

    arr.push_back(20);
    cout<<"Size: "<<arr.size()<<endl;
    cout<<"Capacity: "<<arr.capacity()<<endl;

    arr.push_back(30);
    cout<<"Size: "<<arr.size()<<endl;
    cout<<"Capacity: "<<arr.capacity()<<endl;

    arr.push_back(40);
    cout<<"Size: "<<arr.size()<<endl;
    cout<<"Capacity: "<<arr.capacity()<<endl;

    arr.resize(5);
    cout<<"Size: "<<arr.size()<<endl;
    cout<<"Capacity: "<<arr.capacity()<<endl;
}