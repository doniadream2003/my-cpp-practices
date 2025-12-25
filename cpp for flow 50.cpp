#include <iostream>
using namespace std;
int main()
{
    float NUM1, NUM2, result;
    cout<<"enter first number";
    cin>>NUM1;
    cout<<"first number="<<NUM1<<endl;
    cout<<"enter second number";
    cin>>NUM2;
    cout<<"second number="<<NUM2<<endl;
    if (NUM1>NUM2)
    {
        result=(NUM2/NUM1)*100;
        cout<<"result="<<result;
    }
    else
    {
        result=(NUM1/NUM2)*100;
        cout<<"result="<<result;
    }
    return 0;
}