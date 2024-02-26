#include "complex.h"
#include <iostream>
using namespace std;
Complex::Complex()
{
 Real = 0;
 Imaginary = 0;
}
Complex::Complex(double r, double i)
{
 Real = r;
 Imaginary = i;
}
Complex Complex::operator+(Complex a)
{
 Complex t;
 t.Real = Real + a.Real;
 t.Imaginary = Imaginary + a.Imaginary;
 return t;
}
Complex operator*(Complex a, double n){
    Complex t;
    t.Real = n * a.Real;
    t.Imaginary = n * a.Imaginary;
    return t;
}
Complex operator*(double n, Complex a){
    Complex t;
    t.Real = n * a.Real;
    t.Imaginary = n * a.Imaginary;
    return t;
}
bool Complex::operator!=(Complex a)
{
    return (Real!=a.Real||Imaginary!=a.Imaginary);
}

bool Complex::operator>(Complex a){
    if(Real > a.Real || (Real == a.Real && Imaginary > a.Imaginary))
        return true;
    else
        return false;
}
void Complex::Print()
{
 cout << Real << endl;
 cout << Imaginary << endl;
}
