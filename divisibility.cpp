#include<iostream>
using namespace std;

int main()
{
    cout<<"The number is : ";
    for(int i=5;;i+=5)
    {
        if(i%7==0)
        {
            cout<<i;
            break;
        }
      
}
return 0;
}
