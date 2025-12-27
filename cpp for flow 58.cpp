#include <iostream>
using namespace std;
int main()
{
    int sum=0,counting,number;
    for(number=48;number<=9000;number+=1)
    {
        if (number%4==0)
        {
            counting+=1;
        }
        if (number%5==0 && number%7==0)
        {
            sum+=number;
        }
    }
    cout<<"count of divisable numbers="<<counting<<endl;
    cout<<"sum="<<sum;
    return 0;
}