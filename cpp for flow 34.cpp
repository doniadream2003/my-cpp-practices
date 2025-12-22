#include <iostream>
using namespace std;
int main()
{
    int side1, side2, side3;
    cout<<"enter the first side";
    cin>>side1;
    cout<<"first side of triangle="<<side1<<endl;
    cout<<"enter the second side";
    cin>>side2;
    cout<<"second side of triangle="<<side2<<endl;
    cout<<"enter the third side";
    cin>>side3;
    cout<<"third side of triangle="<<side3<<endl;
    if ((side1==side2) || (side2==side3) || (side1==side3))
    {
        cout<<"this triangle is a isosceles triangle";
    }
    else
    {
        cout<<"this triangle isn't a isosceles triangle";
    }
    return 0;
}