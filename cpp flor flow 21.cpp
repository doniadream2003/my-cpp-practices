#include <iostream>
using namespace std;
int main()
{
    float AM, GM, NUM1, NUM2;
    cout<<"enter the first number";
    cin>>NUM1;
    cout<<"first number="<<NUM1<<endl;
    cout<<"enter the second number";
    cin>>NUM2;
    cout<<"second number="<<NUM2<<endl;
    cout<<"now we calculate arithmetic mean between two numbers";
    AM=(NUM1+NUM2) / 2;
    cout<<"arithmetic mean between two numbers="<<AM<<endl;
    cout<<"now we calculate geometric mean between two numbers";
    GM=sqrt(NUM1 * NUM2);
    cout<<"geometric mean between two numbers"<<GM;
    return 0;
}