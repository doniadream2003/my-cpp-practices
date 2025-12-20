#include <iostream>
using namespace std;
int main()
{
   int  FN, CR, TN, NthT;
   cout<<"enter the first number";
   cin>>FN;
   cout<<"your first number="<<FN<<endl;
   cout<<"enter the common ratio";
   cin>>CR;
   cout<<"common ratio="<<CR<<endl;
   cout<<"enter the term number";
   cin>>TN;
   cout<<"term number="<<TN<<endl;
   cout<<"now we calculate Nth number";
   NthT=FN * (CR ^ (TN - 1));
   cout<<"the Nth number is="<<NthT;
   return 0;
}