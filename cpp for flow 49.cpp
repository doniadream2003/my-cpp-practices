#include <iostream>
using namespace std;
int main()
{
    int temp, m, n, div;
    cout<<"enter the first number";
    cin>>m;
    cout<<"m="<<m<<endl;
    cout<<"enter the second number";
    cin>>n;
    cout<<"n="<<n<<endl;
    if (m<n)
    {
        temp=m;
        m=n;
        n=temp;
        if (m%n==0)
        {
            div=m/n;
            cout<<"result of division="<<div;    
        }
    }
    return 0;
}