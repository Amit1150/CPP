#include <iostream>
#include "Fraction.h"
using namespace std;
Fraction::Fraction(int n, int d)
{
    cout << "constructor"<< endl;
    numerator = n;
    denominator = d;
}

// inbuild copy contructor always made shallow copy.
Fraction::Fraction(const Fraction &f)
{
    cout << "copy constructor"<< endl;
    numerator = f.numerator;
    denominator = f.denominator;
}

void Fraction:: print() {
    cout << this -> numerator << "/"<< denominator << endl;
}

// T prevent copy constructor, used &f2, and to prevent modification in f2, used const
Fraction Fraction:: add(const Fraction &f2) const{
    int lcm = denominator * f2.denominator;
    int x = lcm / denominator;
    int y = lcm / f2.denominator;
    int num = x * numerator + y* f2.numerator;
    
    Fraction fnew(num, lcm);
    return fnew;
}

Fraction Fraction:: operator+(const Fraction &f2) const {
    int lcm = denominator * f2.denominator;
    int x = lcm / denominator;
    int y = lcm / f2.denominator;
    int num = x * numerator + y* f2.numerator;
    
    Fraction fnew(num, lcm);
    return fnew;
}

void Fraction:: multiply(const Fraction &f2) {
    numerator = numerator * f2.numerator;
    denominator = denominator * f2.denominator;
}

bool Fraction:: operator==(const Fraction &f2) const {
    return (numerator == f2.numerator) && (denominator == f2.denominator);
}

// pre increament
Fraction& Fraction:: operator++() {
    numerator = numerator + denominator;
    return *this;
}

Fraction Fraction:: operator++(int) {
    Fraction fnew(numerator, denominator);
    numerator = numerator + denominator;
    return fnew;
}

Fraction& Fraction:: operator+=(const Fraction &f2) {
    int lcm = denominator * f2.denominator;
    int x = lcm / denominator;
    int y = lcm / f2.denominator;
    int num = x * numerator + y* f2.numerator;
    
    numerator = num;
    denominator = lcm;
    return *this;
}
