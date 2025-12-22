#include <iostream>
using namespace std;
int main()
{
    int CD, MyMod, div, diff,x;
    cout<<"enter the count of days";
    cin>>CD;
    cout<<"count of days="<<CD<<endl;
    if (CD>186)
    {
        diff=CD-186;
        x=((diff - 1) / 30) + 7;
        cout<<"count of months="<<x<<endl;
        MyMod=(diff - 1) % 30 + 1;
        cout<<"day of month="<<MyMod;
    }
    else
    {
        div=((CD - 1) / 31) + 1;
        cout<<"count of months="<<div<<endl;
        MyMod=((CD - 1) % 31) + 1;
        cout<<"day of month="<<MyMod;
    }
    return 0;
}