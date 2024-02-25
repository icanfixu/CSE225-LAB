#include <iostream>
#include "dynarr.h"
using namespace std;

int main()
{

    int row,column,x;
    cout << "Enter the size the rows: ";
    cin >> row;
    cout << "Enter the size the column: ";
    cin >> column;
    //1 create two objects of this class
    //one without constructor
    dynArr obj1;
    // one with constructor
    dynArr obj2(row,column);
    //task  2
    for(int i= 0; i<row; ++i){
        for(int j = 0; j<column; ++j){
            cout << "Enter the character of row: " << i <<" and column: "<<j <<"-> ";
            cin >> x;
            obj2.setValue(i,j,x);
        }
    }

    for(int i= 0; i<row; ++i){
        for(int j = 0; j<column; ++j){
            cout << "Your character at row: " << i <<" and column: "<<j <<"-> "<<obj2.getValue(i,j)<<endl;
        }
    }



}
