#include <iostream>
using namespace std;
int main()
{
    int MAX, a, b, c;
    cout<<"enter the first number";
    cin>>a;
    cout<<"a="<<a<<endl;
    cout<<"enter the second number";
    cin>>b;
    cout<<"b="<<b<<endl;
    cout<<"enter the third number";
    cin>>c;
    cout<<"c="<<c<<endl;
    cout<<"now we find the biggest number"<<endl;
    MAX=a;
    if (MAX<b)
    {
        MAX=b;
    }
    else if (MAX<c)
    {
        MAX<c;
    }
    else
    {
        cout<<"biggest number="<<MAX;
    }
    return 0;
}