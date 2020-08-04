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
void Fraction:: add(const Fraction &f2) {
    int lcm = denominator * f2.denominator;
    int x = lcm / denominator;
    int y = lcm / f2.denominator;
    int num = x * numerator + y* f2.numerator;
    
    this -> numerator = num;
    this -> denominator = lcm;
}

void Fraction:: multiply(const Fraction &f2) {
    numerator = numerator * f2.numerator;
    denominator = denominator * f2.denominator;
}
