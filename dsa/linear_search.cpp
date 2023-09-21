#include<iostream>
using namespace std;

int main()
{
    int arr[5];
    int size;
    
    cout << "Enter the size of array:" << endl;
    cin >> size;

    if (size <= 0 || size > 5) {
        cout << "Invalid array size. Please enter a size between 1 and 5." << endl;
        return 1;
    }

    cout << "Enter " << size << " elements: ";
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << endl;

    cout << "The array is: ";
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int element;
    cout << "Enter your element to search: ";
    cin >> element;

    int ans;

    for(int i = 0; i < size; i++)
    {
        if(arr[i] == element)
        {
            ans = i;
            break;
        }
    }

    if(ans<size)
    {
        cout << "The element " << element << " is present at index " << ans << "." << endl;
    }
    else
    {
        cout << "Element not found!" << endl;
    }

    return 0;
}
