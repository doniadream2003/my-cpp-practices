#include <iostream>
using namespace std;
int main()
{
    int NUM1, NUM2;
    float avg;
    cout<<"enter the first number";
    cin>>NUM1;
    cout<<"your first number="<<NUM1<<endl;
    cout<<"enter the second number";
    cin>>NUM2;
    cout<<"your second number="<<NUM2<<endl;
    avg=sqrt(NUM1 * NUM2);
    cout<<"average="<<avg;
    return 0;
}