#include <iostream>
using namespace std;
int main()
{
    int number, part1, part2, part3, m;
    cout<<"enter a number";
    cin>>number;
    cout<<"number="<<number<<endl;
    if (number%12==0)
    {
        m=number/12;
        part1=m*3;
        cout<<"part 1="<<part1<<endl;
        part2=m*4;
        cout<<"part 2="<<part2<<endl;
        part3=m*5;
        cout<<"part 3="<<part3<<endl;
    }
    else
    {
        cout<<"bye!";
    }
    return 0;
}