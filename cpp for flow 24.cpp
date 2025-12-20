#include <iostream>
using namespace std;
int main()
{
    int NUM1, NUM2, add, Diff, pro, MyMod, Div;
    cout<<"enter the first number";
    cin>>NUM1;
    cout<<"first number="<<NUM1<<endl;
    cout<<"enter the second number";
    cin>>NUM2;
    cout<<"second number="<<NUM2<<endl;
    cout<<"we calculate sum";
    add=NUM1+NUM2;
    cout<<"result for add two number="<<add<<endl;
    cout<<"we calculate diffrance";
    Diff=NUM1-NUM2;
    cout<<"result for diffrance two numbers="<<Diff<<endl;
    cout<<"we calculate product";
    pro=NUM1*NUM2;
    cout<<"result for product two numbers="<<pro<<endl;
    cout<<"we calculate division";
    Div=NUM1/NUM2;
    cout<<"result for division two numbers="<<Div<<endl;
    cout<<"we calculate modulo";
    MyMod=NUM1%NUM2;
    cout<<"result for modulo two numbers="<<MyMod;
    return 0;
}