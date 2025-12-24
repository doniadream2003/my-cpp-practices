#include <iostream>
using namespace std;
int main()
{
    int DayWeek, NoMonth;
    string OutWeek, OutMOnth;
    cout<<"enter the day of week between 1 to 7";
    cin>>DayWeek;
    cout<<"day of week="<<DayWeek<<endl;
    if (DayWeek==1)
    {
        OutWeek="saturday";
        cout<<"Day of week="<<OutWeek<<endl;
    }
    else if (DayWeek==2)
    {
        OutWeek="sunday";
        cout<<"Day of week="<<OutWeek<<endl;
    }
    else if (DayWeek==3)
    {
        OutWeek="monday";
        cout<<"Day of week="<<OutWeek<<endl;
    }
    else if (DayWeek==4)
    {
        OutWeek="tuesday";
        cout<<"Day of week="<<OutWeek<<endl;
    }
    else if (DayWeek==5)
    {
        OutWeek="wendsday";
        cout<<"Day of week="<<OutWeek<<endl;
    }
    else if (DayWeek==6)
    {
        OutWeek="saturday";
        cout<<"Day of week="<<OutWeek<<endl;
    }
    else if (DayWeek==7)
    {
        OutWeek="friday";
        cout<<"Day of week="<<OutWeek<<endl;
    }
    cout<<"we don't find your day of week";
    cout<<"enter the day of month between 1 to 12";
    cin>>NoMonth;
    cout<<"number of month="<<NoMonth<<endl;
    if (NoMonth==1)
    {
        OutMOnth="January";
        cout<<"month's name="<<OutMOnth;
    }
    else if (NoMonth==2)
    {
        OutMOnth="February";
        cout<<"month's name="<<OutMOnth;
    }
    else if (NoMonth==3)
    {
        OutMOnth="March"
        cout<<"month's name="<<OutMOnth;
    }
    else if (NoMonth==4)
    {
        OutMOnth="April";
        cout<<"month's name="<<OutMOnth;
    }
    else if (NoMonth==5)
    {
        OutMOnth="May";
        cout<<"month's name="<<OutMOnth;
    }
    else if (NoMonth==6)
    {
        OutMOnth="June";
        cout<<"month's name="<<OutMOnth;
    }
    else if (NoMonth==7)
    {
        OutMOnth="July";
        cout<<"month's name="<<OutMOnth;
    }
    else if (NoMonth==8)
    {
        OutMOnth="August";
        cout<<"month's name="<<OutMOnth;
    }
    else if (NoMonth==9)
    {
        OutMOnth="September";
        cout<<"month's name="<<OutMOnth;
    }
    else if (NoMonth==10)
    {
        OutMOnth="October";
        cout<<"month's naame="<<OutMOnth;
    }
    else if (NoMonth==11)
    {
        NoMonth="November";
        cout<<"month's name="<<OutMOnth;
    }
    else if (NoMonth==12)
    {
        OutMOnth="December";
        cout<<"month's name="<<OutMOnth;
    }
    cout<<"we don't find your name of number of month";
    return 0;
}