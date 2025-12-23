#include <iostream>
using namespace std;
int main()
{
    string code;
    int NUM1, NUM2, result;
    cout<<"enter the first number";
    cin>>NUM1;
    cout<<"your first number="<<NUM1<<endl;
    cout<<"enter the second number";
    cin>>NUM2;
    cout<<"your second number="<<NUM2<<endl;
    cout<<"enter the code | if yor calculate divison enter the DIV or if yor calculate deffrance enter the DIFF or if yor calculate add enter the ADD or if yor calculate product enter the PRO------->";
    cin>>code;
    if (code=="DIV")
    {
        result=NUM1/NUM2;
    }
    else if (code=="DIFF")
    {
        result=NUM1-NUM2;
    }
    else if (code=="ADD")
    {
        result=NUM1+NUM2;
    }
    else if (code=="PRO")
    {
        result=NUM1*NUM2;
    }
    cout<<"your result="<<result;
    return 0;
}