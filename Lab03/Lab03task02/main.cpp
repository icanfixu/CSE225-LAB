#include <iostream>
#include "complex.h"

using namespace std;

int main()
{
    Complex A(1,1), B(1,1);
    A.Print();
B.Print();

if(A != B) {
  std::cout << "not equal" << std::endl;
}
else{
    cout<<"Equal"<<endl;
}

if(A>B)
cout<<"A is greater";
else
    cout<<"B is greater";
return 0;

}
