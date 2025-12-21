#include <iostream>
using namespace std;
int main()
{
    int number, r1, r2;
    cout<<"enter a number"<<endl;
    cin>>number;
    cout<<"your number="<<number<<endl;
    cout<<"we division your number by 3 for calculate remainder"<<endl;
    r1=number%3;
    cout<<"first remainder="<<r1<<endl;
    cout<<"we division your number by 7 for calculate remainder"<<endl;
    r2=number%7;
    cout<<"second remainder="<<r2<<endl;
    if (r1==0 and r2==0)
    {
        cout<<"The number is divisible by both 3 and 7"<<endl;
    }
    else
    {
        cout<<"The number isn't divisible by both 3 and 7"<<endl;
    }
    return 0;
}