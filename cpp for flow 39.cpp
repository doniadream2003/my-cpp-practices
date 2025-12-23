#include <iostream>
using namespace std;
int main()
{
    int NUM1, NUM2, powing;
    cout<<"enter the first number";
    cin>>NUM1;
    cout<<"first number="<<NUM1<<endl;
    cout<<"enter the second number";
    cin>>NUM2;
    cout<<"second number="<<NUM2<<endl;
    if (NUM1<NUM2)
    {
        powing=NUM1^NUM2;
    }
    else
    {
        powing=NUM2^NUM1;
    }
    cout<<"result="<<result;
    return 0;
}