#include <iostream>
using namespace std;
int main()
{
   float area, HT, BT;
   cout<<"enter the height of triangle";
   cin>>HT;
   cout<<"height of triangle="<<HT<<endl;
   cout<<"enter the base of triangle";
   cin>>BT;
   cout<<"base of triangle="<<BT<<endl;
   cout<<"now we calculate the triangle's area";
   area=(HT*BT)/2;
   cout<<"triangle area="<<area;
   return 0;
}