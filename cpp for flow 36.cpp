#include <iostream>
using namespace std;
int main()
{
    string NameSeason;
    int DS;
    cout<<"enter the first three big letters of a season";
    cin>>NameSeason;
    cout<<"your input="<<NameSeason<<endl;
    if (NameSeason=="SPR")
    {
        DS=93;
    }
    else if (NameSeason=="SUM")
    {
        DS=93;
    }
    else if(NameSeason=="AUT")
    {
        DS=90;
    }
    else if (NameSeason=="WIN")
    {
        DS=89;
    }
    cout<<"days of a season="<<DS;
    return 0;
}