#include <iostream>
using namespace std;
int main()
{
    int FN, SN;
    cout<<"enter the first number";
    cin>>FN;
    cout<<"first number="<<FN<<endl;
    cout<<"enter the second number";
    cin>>SN;
    cout<<"second number="<<SN<<endl;
    cout<<"we compare two numbers"<<endl;
    if (FN>SN)
    {
        cout<<"your biggst number="<<FN;
    }
    else
    {
        cout<<"your biggest number="<<SN;
    }
    return 0;
}