#include <iostream>
using namespace std;
int main()
{
    float R,D,AS,AC,Dif,MyPi=3.14;
    cout<<"enter the R for circle";
    cin>>R;
    cout<<"R for circle="<<R<<endl;
    cout<<"we convert R's circle to D's circle"<<endl;
    D=2*R;
    cout<<"D for circle="<<D<<endl;
    cout<<"we calculate area square"<<endl;
    AS=D*D;
    cout<<"area square is="<<endl;
    cout<<"we calculate area circle"<<endl;
    AC=MyPi*R;
    cout<<"area circle="<<AC<<endl;
    cout<<"we calculate iferction between area square and area circle";
    Diff=AS-AC;
    cout<<"diferction between area square and area circle="<<Diff<<endl;
}
