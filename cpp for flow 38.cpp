#include <iostream>
using namespace std;
int main()
{
    int x1, x2, y1, y2, m, x, y, b;
    cout<<"entrer the lenght and width of first point"<<endl;
    cin>>x1;
    cout<<"x1 for first point="<<x1<<endl;
    cout<<"y1 for first point=";
    cin>>y1;
    cout<<"y1 for first point="<<y1<<endl;
    cout<<"entrer the lenght and width of second point"<<endl;
    cin>>x2;
    cout<<"x2 for second point="<<x2<<endl;
    cin>>y2;
    cout<<"y2 for second point="<<y2<<endl;
    if(x1==x2)
    {
        cout<<"your line equation is------>    "<<"x="<<x1;
    }
    else
    {
        m=(y2-y1)/(x2-x1);
        b=(y2-y1)/(x2-x1);
        cout<<"your line equation="<<m<<"x + "<<b;
    }
    return 0;
}