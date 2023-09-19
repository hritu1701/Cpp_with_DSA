#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"Enter your marks: ";
    cin>>marks;

    if (marks>100)
    {
          cout<<"Enter valid marks";
    }

else if(marks>80)
{
    cout<<"Grade A";
}
else if(marks>60)
{
    cout<<"Grade B";
}
else if(marks>40)
{
    cout<<"Grade c";
}
else
{
    cout<<"Fail";
}
return 0;
}