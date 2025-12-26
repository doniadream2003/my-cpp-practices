#include <iostream>
using namespace std;
int main()
{
    int sum, i;
    cout<<"we set sum's variable in zero"<<endl;
    sum=0;
    cout<<"sum="<<sum<<endl;
    for(i=10;i<=98;i+=2)
    {
        sum+=i;
    }
    cout<<"sum="<<sum;
    return 0;
}