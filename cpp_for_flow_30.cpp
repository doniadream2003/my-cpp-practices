#include <iostream>
using namespace std;
int main()
{
    int No, NUM1, NUM2, NUM3, MAX;
    cout<<"enter the first number"<<endl;
    cin>>NUM1;
    cout<<"first number="<<NUM1<<endl;
    cout<<"enter the second number"<<endl;
    cin>>NUM2;
    cout<<"second number="<<NUM2<<endl;
    cout<<"enter the third number"<<endl;
    cin>>NUM3;
    cout<<"third number="<<NUM3<<endl;
    MAX=NUM1;
    No=1;
    if (MAX<NUM2)
    {
        MAX=NUM2;
        No=2;
    }
    else if (MAX<NUM3)
    {
        MAX=NUM3;
        No=3;
      cout<<"biggest number="<<MAX<<"count of number="<<No;  
    }
    return 0;
}