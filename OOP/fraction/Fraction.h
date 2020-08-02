#ifndef _FRACTION_H_
#define _FRACTION_H_

class Fraction
{
private:
    int numerator;
    int denominator;
public:
    Fraction(int n, int d);
    Fraction(const Fraction &f);
    void print();
    void add(const Fraction &f2);
    void multiply(const Fraction &f2);
};

#endif // _FRACTION_H_
