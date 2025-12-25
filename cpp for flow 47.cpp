#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout<<"enter a integer number";
    cin>>x;
    cout<<"x="<<x<<endl;
    if (x<0)
    {
       y=(2*(x*x))-(3*x)+1;
       cout<<"y="<<y;
    }
    else if (x==0)
    {
        y=3;
        cout<<"y="<<y;
    }
    else if (x>0)
    {
        y=((2*x)+4)*((2*x)-5);
        cout<<"y="<<y;
    }
    return 0;
}