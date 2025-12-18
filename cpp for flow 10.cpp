#include <iostream>
using namespace std;
int main()
{
    float HeightCM, WeightKG, HeightInch, WeightPound;
    cout<<"enter the weight in kg";
    cin>>WeightKG;
    cout<<"weight in kg="<<WeightKG<<endl;
    cout<<"we convet weight in kg to weight in pound";
    WeightPound=WeightKG * 2.208;
    cout<<"weight in pound="<<WeightPound<<endl;
    cout<<"enter the height in cm";
    cin>>HeightCM;
    cout<<"height in cm ="<<HeightCM<<endl;
    cout<<"we convet height in cm to height in inch";
    HeightInch=(HeightCM * 36) / 91.44;
    cout<<"height in inch="<<HeightInch;
    return 0;
}