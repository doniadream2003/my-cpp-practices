#include <iostream>
using namespace std;
int main()
{
    int NUM1, NUM2, result;
    cout<<"enter the first number";
    cin>>NUM1;
    cout<<"first number="<<NUM1<<endl;
    cout<<"enter second number";
    cin>>NUM2;
    cout<<"second number="<<NUM2;
    if (NUM1>NUM2)
    {
        result=(2*NUM1)+NUM2;
        cout<<"result="<<result;
    }
    else if (NUM1<NUM2)
    {
        result=(3*NUM1)-NUM2;
        cout<<"result="<<result;
    }
    else if (NUM1==NUM2)
    {
        result=(NUM1^2)+(NUM2^2);
        cout<<"result="<<result;
    }
    return 0;
}