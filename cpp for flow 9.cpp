#include <iostream>
using namespace std;
int main()
{
    float C,F;
    cout<<"enter the fahrenheit degrees";
    cin>>F;
    cout<<"fahrenheit degrees="<<F<<endl;
    cout<<"now we convet fahrenheit degrees to celsius degrees";
    C=(5*(F-32))/9;
    cout<<"Celsius degrees="<<C;
    return 0;
}