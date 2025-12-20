#include <iostream>
using namespace std;
int main()
{
    int SalePrice, price, profit;
    cout<<"enter the product price";
    cin>>price;
    cout<<"product price"<<price<<endl;
    cout<<"enter the profit";
    cin>>profit;
    cout<<"profit="<<profit<<endl;
    cout<<"now we calculate the sale's price";
    SalePrice=price+((price*profit)/100);
    cout<<"product price="<<SalePrice;
    return 0;

}