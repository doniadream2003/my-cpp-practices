#include <iostream>
using namespace std;
int main()
{
    int NUM1, NUM2, NUM3, result,compare;
    cout<<"enter the first number";
    cin>>NUM1;
    cout<<"first number="<<NUM1<<endl;
    cout<<"enter the second number";
    cin>>NUM2;
    cout<<"second number="<<NUM2<<endl;
    cout<<"enter the third number";
    cin>>NUM3;
    cout<<"third number="<<NUM3<<endl;
    if (NUM1%5==0)
    {
        result=NUM1*NUM1*NUM1;
        cout<<"your result="<<result;
    }
    else if (NUM2%5==0)
    {
        result=NUM2*NUM2*NUM2;
        cout<<"your result="<<result;
    }
    else if (NUM3%5==0)
    {
        result=NUM3*NUM3*NUM3;
        cout<<"your result="<<result;
    }
    return 0;
}