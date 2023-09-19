#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int b=0;
    cout<<~(a)<<endl; //bitwise complement
    cout<< (a<<1)<<endl; //Left shift
    cout<<(a>>1)<<endl; //right shift
    cout<<(a ^ b)<<endl; // execlusive OR

    return 0;
}