#include <iostream> 
using namespace std;
int main()
{
    int days, profit=400, CS=60,amount=0, No;
    float PiceProfit=0.1
    cout<<"enter your days of works";
    cin>>days;
    cout<<"days="<<days<<endl;
    for(No=0;No<=days;No+=1)
    {
        CS+=1;
        amount+=CS * profit * PiceProfit;
    }
    cout<<"your amount="<<amount;
    return 0;
}