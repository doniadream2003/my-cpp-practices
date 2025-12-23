#include <iostream>
using namespace std;
int main()
{
    int NUM1, NUM2, m;
    cout<<"enter the first number";
    cin>>NUM1;
    cout<<"first number="<<NUM1<<endl;
    cout<<"enter the second number";
    cin>>NUM2;
    cout<<"second number="<<NUM2<<endl;
    if (NUM1>NUM2)
    {
        m=NUM1*NUM2;
    }
    else
    {
        m=NUM1+NUM2;
    }
    cout<<"result="<<m;
    return 0;
}