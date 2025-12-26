#include <iostream>
using namespace std;
int main()
{
    int sum, number;
    cout<<"we set sum's variable in zero"<<endl;
    sum=0;
    cout<<"sum="<<sum<<endl;
    for(number=20;number<=2000;number+=1)
    {
        if(number%3==0 && number%7==0)
        {
            sum+=number;
        }
    }
    cout<<"sum="<<sum;
    return 0;
}