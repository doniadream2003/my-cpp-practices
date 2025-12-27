#include <iostream>
using namespace std;
int main()
{
    int No, num, pow;
    for(No=1;No<=50;No+=1)
    {
        cout<<"enter a number";
        cin>>num;
        if (num>=100)
        {
            pow=num*num;
            cout<<"number="<<num<<endl<<"pow="<<pow;
        }
    }
    return 0;
}