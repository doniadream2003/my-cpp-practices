#include <iostream>
using namespace std;
int main()
{
    int BSY , BGY , AgeUser ,NowGregorian=2025;
    cout<<"enter your birthday solar year";
    cin>>BSY;
    cout<<"your birthday solar year is="<<BSY<<endl;
    cout<<"we convert your birthday solar year to birthday gregorian year";
    cout<<"your birthday gregorian year is="<<BGY=BSY+621<<endl;
    cout<<"we calculate your age"<<endl;
    AgeUser=NowGregorian-BGY;
    cout<<"your age is ="<<AgeUser;

}