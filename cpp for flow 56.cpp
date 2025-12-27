#include <iostream>
using namespace std;
int main()
{
    int sum=0 , number;
    for(number=0;number<=5000;number+=1)
    {
        if (number%2==0 && number%3==0 && number%7==0)
        {
            sum+=number;
        }
    }
    cout<<"sum="<<sum;
    return 0;
}