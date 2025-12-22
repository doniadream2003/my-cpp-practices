#include <iostream>
using namespace std;
int main()
{
    int side1, side2, side3;
    cout<<"enter the first side of triangle";
    cin>>side1;
    cout<<"first side="<<side1<<endl;
    cout<<"enter the second side of triangle";
    cin>>side2;
    cout<<"second side="<<side2<<endl;
    cout<<"enter the third side of triangle";
    cin>>side3;
    cout<<"third side="<<side3<<endl;
if (
    (side1*side1 == side2*side2 + side3*side3) ||
    (side2*side2 == side1*side1 + side3*side3) ||
    (side3*side3 == side1*side1 + side2*side2)
   )
{
    cout << "these are sides of a right triangle";
}
else
{
    cout << "these aren't sides of a right triangle";
}
    return 0;
}