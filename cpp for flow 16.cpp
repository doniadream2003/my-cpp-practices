#include <iostream>
using namespace std;
int main()
{
    float area, perimeter, lenght, width;
    cout<<"enter the lenght of rectangle";
    cin>>lenght;
    cout<<"lenght of rectangle="<<lenght<<endl;
    cout<<"enter the width of rectangle";
    cin>>width;
    cout<<"width of rectangle="<<width<<endl;
    cout<<"now we calculate the rectangle's area";
    area=lenght*width;
    cout<<"rectangle's area="<<area<<endl;
    cout<<"now we calculate rectangle's primeter";
    perimeter=2*(lenght+width);
    cout<<"rectangle's primeter="<<perimeter;
    return 0;
}