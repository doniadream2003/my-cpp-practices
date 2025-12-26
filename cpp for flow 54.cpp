#include <iostream>
using namespace std;
int main()
{
    int number, sum;
    cout<<"we set sum's variable in zero"<<endl;
    sum=0;
    cout<<"sum="<<sum<<endl;
    for(number=100;number<=1000;number+=5)
    {
        sum+=number;
    }
    cout<<"sum="<<sum;
    return 0;
}