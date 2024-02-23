#include <iostream>

using namespace std;

int main()
{
    //taking input
    int row,column;
    cout << "Enter the size the rows: ";
    cin >> row;

    //init 2d array
    char **pArray = new char* [row];
    //init another array for storing col number
    int *pCol = new int [row];


    //makin another array inside the pointer of pointer of pArray
    //and storing the column number inside another array
    for(int i= 0; i<row; ++i){
        cout << "Enter the size the column at index "<<i<<": ";
        cin >> column;
        pArray[i] = new char [column];
        pCol[i] = column;
    }
    //inputting values
    for(int i= 0; i<row; ++i){
        for(int j = 0; j<pCol[i]; ++j){
            cout << "Enter the character of column: " << i <<" and row: "<<j <<"-> ";
            cin >> pArray[i][j];
        }
    }

    //printing the string
    cout << "The string is: ";
    for(int i= 0; i<row; ++i){
        for(int j = 0; j<pCol[i]; ++j){
            cout <<pArray[i][j];
        }
    }

    //deleting the pointers of 2d array
    for (int i = 0; i<row; ++i){
        delete[] pArray[i];
    }
    delete[] pArray;

    //deleting the pointer to the array that stores column numbers
    delete [] pCol;



}
