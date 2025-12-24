#include <iostream>
using namespace std;
int main()
{
    int number;
    cout<<"enter a number";
    cin>>number;
    cout<<"your number="<<number<<endl;
    if (number>0)
    {
        cout<<"your number is a postive";
    }
    else if (number<0)
    {
        cout<<"your number is a nagetive";
    }
    else if (number==0)
    {
        cout<<"your number is zero";
    }
    return 0;
}