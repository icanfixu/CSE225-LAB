#include <iostream>

using namespace std;

int main()
{
    //taking input
    int row,column;
    cout << "Enter the size the rows: ";
    cin >> row;
    cout << "Enter the size the column: ";
    cin >> column;

    //init 2d array
    char **pArray = new char* [row];

    //makin another array inside the pointer of pointer of pArray
    for(int i= 0; i<row; ++i){
        pArray[i] = new char [column];
    }
    //inputting values
    for(int i= 0; i<row; ++i){
        for(int j = 0; j<column; ++j){
            cout << "Enter the character of column: " << i <<" and row: "<<j <<"-> ";
            cin >> pArray[i][j];
        }
    }

    //printing the string
    cout << "The string is: ";
    for(int i= 0; i<row; ++i){
        for(int j = 0; j<column; ++j){
            cout <<pArray[i][j];
        }
    }

    //deleting the pointers
    for (int i = 0; i<row; ++i){
        delete[] pArray[i];
    }
    delete[] pArray;

}
