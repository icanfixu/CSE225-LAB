#include "dynarr.h"
#include <iostream>
using namespace std;
dynArr::dynArr()
{
 data = NULL;
 size = 0;
}
dynArr::dynArr(int column, int row)
{
 data = new int*[row];
 for(int i= 0; i<row; ++i){
        data[i] = new int[column];
    }
 size = row*column;
}
dynArr::~dynArr()
{
if (data != nullptr) {
        for (int i = 0; i < size; ++i) {
            delete[] data[i];
        }
        delete[] data;
    }}
int dynArr::getValue(int row, int column)
{
 return data[row][column];
}
void dynArr::setValue(int row,int column, int value)
{
 data[row][column] = value;
}
 void allocate(int row, int column)
 {
         // Deallocate existing memory if any

        for (int i = 0; i < row; ++i) {
            delete[] data[i];
        }
        delete[] data;


    // Allocate new memory
    data = new int*[row];
    for (int i = 0; i < row; ++i) {
        data[i] = new int[column];
    }

    size = row * column;
 }
