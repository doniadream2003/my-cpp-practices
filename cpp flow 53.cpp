#include <iostream>
using namespace std;
int main()
{
    int number;
    float sum;
    cout<<"we set sum's variable in zero"<<endl;
    sum=0;
    cout<<"sum="<<sum;
    for(number=2;number<101;i+=1)
    {
        sum=sum+(1/(number^2));
    }
    cout<<"sum="<<sum;
    return 0;
}