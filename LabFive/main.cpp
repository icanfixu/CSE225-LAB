#include <iostream>
#include "sortedtype.h"
#include "sortedType.cpp"
using namespace std;

class timeStamp
{
public:
    double second, minutes, hours;
    timeStamp(double hr, double minu, double sec)
    {
        second = sec;
        minutes = minu;
        hours = hr;
    }
    timeStamp()
    {
        second = 0.0;
        minutes = 0.0;
        hours = 0.0;
    }

    void toString()
    {
        cout<<hours<<":"<<minutes<<":"<<second<<endl;
    }

    bool operator < (timeStamp a)
    {
        timeStamp t(hours,minutes,second);

        return (t.hours*60*60+t.minutes*60+t.second)<(a.hours*60*60+a.minutes*60+a.second);
    }
    bool operator > (timeStamp a)
    {
        timeStamp t(hours,minutes,second);

        return (t.hours*60*60+t.minutes*60+t.second)>(a.hours*60*60+a.minutes*60+a.second);
    }

    bool operator != (timeStamp a)
    {
        timeStamp t(hours,minutes,second);

        return (a.hours*60*60+a.minutes*60+a.second)!=(t.hours*60*60+t.minutes*60+t.second);
    }



};


int main()
{

    SortedType<int> a;
    cout<<a.LengthIs()<<endl;

    a.InsertItem(5);
    a.InsertItem(7);
    a.InsertItem(4);
    a.InsertItem(2);
    a.InsertItem(1);

    int item ;

    for (int i = 0; i < a.LengthIs(); i++) {
        a.GetNextItem(item);
        cout << item << " ";
    }
    cout << endl;

    int num = 6;
    bool found;
    a.RetrieveItem(num, found);
    cout << "Item is " << (found ? "found" : "not found") << endl;

    num = 5;
    a.RetrieveItem(num, found);
    cout << "Item is " << (found ? "found" : "not found") << endl;
    cout<<(a.IsFull()? "List is full":"List is not full")<<endl;

    a.DeleteItem(1);

    a.ResetList();
    for (int i = 0; i < a.LengthIs(); i++) {
        a.GetNextItem(item);
        cout << item << " ";
    }
    cout << endl;

    cout<<(a.IsFull()? "List is full":"List is not full")<<endl;

    SortedType<timeStamp> b;

    b.InsertItem(timeStamp(15, 34, 23));
    b.InsertItem(timeStamp(13, 13, 02));
    b.InsertItem(timeStamp(43, 45, 12));
    b.InsertItem(timeStamp(25, 16, 17));
    b.InsertItem(timeStamp(52, 02, 20));

    b.DeleteItem(timeStamp(25, 16, 17));

    timeStamp lol;
    b.ResetList();

    for (int i = 0; i < b.LengthIs(); i++) {
        b.GetNextItem(lol);
        lol.toString();
    }
    cout << endl;




    return 0;
}
