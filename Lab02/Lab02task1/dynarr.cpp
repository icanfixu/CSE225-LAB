#ifndef DYNARR_CPP_INCLUDED
#define DYNARR_CPP_INCLUDED

#include "dynarr.h"
#include <iostream>
using namespace std;
dynArr::dynArr()
{
 data = NULL;
 size = 0;
}
dynArr::dynArr(int s)
{
 data = new int[s];
 size = s;
}
dynArr::~dynArr()
{
 delete [] data;
}
int dynArr::getValue(int index)
{
 return data[index];
}
void dynArr::setValue(int index, int value)
{
 data[index] = value;
}



#endif // DYNARR_CPP_INCLUDED
