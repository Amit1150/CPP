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
    Fraction add(const Fraction &f2) const;
    Fraction operator+(const Fraction &f2) const;
    void multiply(const Fraction &f2);
    bool operator==(const Fraction &f2) const;
    Fraction& operator++(); // pre increament
    Fraction operator++(int); // post increament
    Fraction& operator+=(const Fraction &f2);
};

#endif // _FRACTION_H_
