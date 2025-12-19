#include <iostream>
using namespace std;
int main()
{
    int days, hours, minutes, seconds;
    cout<<"enter the days of months";
    cin>>days;
    cout<<"your days="<<days<<endl;
    cout<<"we calculate in hours";
    hours=days*24;
    cout<<"hours="<<hours<<endl;
    cout<<"we calculate in minutes";
    minutes=hours*60;
    cout<<"minutes="<<minutes<<endl;
    cout<<"we calculate in seconds";
    seconds=minutes*60;
    cout<<"seconds="<<seconds<<endl;
    cout<<hours<<":"<<minutes<<":"<<seconds;
    return 0;
}