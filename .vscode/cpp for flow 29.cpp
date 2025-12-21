#include <iostream>
using namespace std;
int main()
{
    int MIN, a, b, c;
    cout<<"enter the first number";
    cin>>a;
    cout<<"a="<<a<<endl;
    cout<<"enter the second number";
    cin>>b;
    cout<<"b="<<b<<endl;
    cout<<"enter the third number";
    cin>>c;
    cout<<"c="<<c<<endl;
    cout<<"now we find the smallest number"<<endl;
    MIN=a;
    if (MIN<b)
    {
        MIN=b;
    }
    else if (MIN<c)
    {
        MIN<c;
    }
    else
    {
        cout<<"smallest number="<<MIN;
    }
    return 0;
}