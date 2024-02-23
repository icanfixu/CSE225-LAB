#include <iostream>

using namespace std;

int main()
{
    int sized;
    int* pArr;

    //dynamically allocating an array of integers..
    cout << "Enter the size of an array: ";
    cin >> sized;

    //creating an array using dynamic memory allocation
    pArr = new int[sized];

    //populating the array
    for (int i = 0; i <sized; i++){
        cout <<"Enter the integer at index: " << i << ": ";
        cin >> pArr[i];
    }

    //printing the array
    for(int i = 0; i<sized;i++){
        cout << *(pArr+i);
    }
    delete[] pArr;


}
