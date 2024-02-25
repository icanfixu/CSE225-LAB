#include <iostream>
#include "dynarr.h"
using namespace std;

int main()
{

    int x;
    //1 create two objects of this class
    //one without constructor
    dynArr obj1();
    // one with constructor
    dynArr obj2(5);
    //task  2
    for(int i =0;i<5;++i){
        cout<<"ENter int at index "<< i<<": ";
        cin>>x;
        obj2.setValue(i,x);
    }
    for(int i =0;i<5;++i){
        cout<<"Data int at index "<< i<<": "<<endl;

        obj2.getValue(i);
    }



}
