#include <iostream>
using namespace std;
int main()
{
    int a,b,c,temp;
    cout<<"enter the first number";
    cin>>a;
    cout<<"first  number="<<a<<endl;
    cout<<"enter the second number";
    cin>>b;
    cout<<"second number="<<b<<endl;
    cout<<"enter the third number";
    cin>>c;
    cout<<"third number="<<c<<endl;
    if (a>b)
    {
        temp=a;
        a=b;
        b=temp;
    }
    if (a>c)
    {
        temp=a;
        a=c;
        c=temp;
    }
    if (b>c)
    {
        temp=b;
        b=c;
        c=temp;   
    }
    cout<<"a="<<a<<"  b="<<b<<"  c="<<c;
    return 0;
}