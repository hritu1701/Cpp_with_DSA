#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    //Using vector

    // vector<int>arr;
    // arr={7,4,9,2,5};

    // sort(arr.begin(),arr.end());

    // int n=arr.size();
    // reverse(arr.begin(),arr.end());

    //Using arrays
    int arr[5]={7,4,9,2,5};
    int n=5;
    sort(arr,arr+n);
    reverse(arr,arr+n);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    vector<string>life;
    life={"Apple","Banana","Bamana","Guava","Mango","Lemon"};
    life.insert(life.begin()+1,"Kiwi");
    sort(life.begin(),life.end());

    for(int i=0;i<life.size();i++)
    {
        cout<<life[i]<<" ";
    }
}