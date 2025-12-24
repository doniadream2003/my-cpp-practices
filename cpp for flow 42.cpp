#include <iostream>
using namespace std;
int main()
{
    int NUM1, NUM2, NUM3, NUM4, RE1, RE2;
    cout<<"enter the first number";
    cin>>NUM1;
    cout<<"first number="<<NUM1<<endl;
    cout<<"enter the second number";
    cin>>NUM2;
    cout<<"second number="<<NUM2<<endl;
    cout<<"enter the third number";
    cin>>NUM3;
    cout<<"third number="<<NUM3<<endl;
    cout<<"enter the fourth number";
    cin>>NUM4;
    cout<<"fourth number="<<NUM4<<endl;
    RE1=NUM1+NUM2;
    RE2=NUM3+NUM4;
    if (RE1>RE2)
    {
        cout<<"result="<<RE1;
    }
    else
    {
        cout<<"result="<<RE2;
    }
    return 0;
}