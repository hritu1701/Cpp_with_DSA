#include<iostream>
using namespace std;
int main()
{
    int day;
    cout<<"Enter the Day number: ";
    cin>>day;

    if(day<=7)
    {
        switch(day)
        {
            case 1:
            cout<<"Sunday!";
            break;

            case 2:
            cout<<"Monday!";
            break;

            case 3:
            cout<<"Tuesday!";
            break;

            case 4:
            cout<<"Wednesday!";
            break;

            case 5:
            cout<<"Thrusday!";
            break;

            case 6:
            cout<<"Friday!";
            default:
            cout<<" is the day you are looking for.";
            break;
            
            case 7:
            cout<<"Saturday!";
            break;

            
        }
    }
    else
    {
        cout<<"Enter a valid day number!";
    }
}