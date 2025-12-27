#include <iostream>
using namespace std;
int main()
{
    int sum=0 , number;
    for(number=15;number<=4000;number+=1)
    {
        if(number%3==0 && number%4==0 && number%6==0)
        {
            sum+=number;
        }
    }
    cout<<"sum="<<sum;
    return 0;
}