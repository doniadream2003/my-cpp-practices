#include <iostream>
using namespace std;
int main()
{
    int a, b, c, delta, rr1, rr2;
    cout<<"enter the first variable for quadratic equation";
    cin>>a;
    cout<<"a="<<a<<endl;
    cout<<"enter the second variable for quadratic equation";
    cin>>b;
    cout<<"b="<<b;
    cout<<"enter the third variable for quadratic equation";
    cin>>c;
    cout<<"now we calaulate real roots of quadratic equation with delta"<<endl;
    delta=sqrt((b*b)-(4*a*c));
    cout<<"delta of quadratic equation="<<delta<<endl;
    cout<<"now we calculate real roots of quadratic equation"<<endl;
    if (delta>0)
    {
        rr1=(-b+delta)/(2*a);
        cout<<"first real root="<<rr1<<end;
        rr2=(-b-delta)/(2*a);
        cout<<"second real root="<<rr2;
    }
    else if (delta=0)
    {
        rr1=(-b)/(2*a);
        cout<<"one real root="<<rr1;
    }
    else if (delta<0)
    {
        cout<<"your quadratic equation hasn't real root";
    }
}