//
// Created by Amanda on 14/06/2025.
//

#include <iostream>
using namespace std;
//#include "fraction_aux.h"

/*Create a class Fraction for performing arithmetic operations with
 *fractions according to the specification below. */

// Class Fraction
class Fraction {
public:
    // Constructors
    Fraction(); // default
    Fraction(int numerator, int denominator);

    // Getters (accessors)
    int get_numerator();
    int get_denominator();

    // Arithmetic operations
    Fraction sum(const Fraction& right);
    Fraction sub(const Fraction& right);
    Fraction mul(const Fraction& right);
    Fraction div(const Fraction& right);

    // Other functions
    void write() const;

private:
    // Attributes
    int numerator_;
    int denominator_;

    // Other functions
    int gcd(int a, int b);
    void normalise();
};

// Defining member functions Fraction::
Fraction::Fraction() { // default
    numerator_ = 0;
    denominator_ = 1;
}

//! Compute the gcd of two numbers.
int Fraction::gcd(int a, int b) {
    while (b != 0) {
        int tmp = a;
        a = b;
        b = tmp % b;
    }
    return a;
}

//! Normalize a fraction.
void Fraction::normalise() {
    int g = gcd(numerator_, denominator_);
    numerator_ /= g;
    denominator_ /= g;
    if (denominator_ < 0) {
        numerator_ = - numerator_;
        denominator_ = - denominator_;
    }
}

Fraction::Fraction(int numerator, int denominator) {
    numerator_ = numerator;
    denominator_ = denominator;
    // Ensure that the fraction is stored in normalised form
    normalise();
}

// shows fraction on the screen
void Fraction::write() const {
    cout << numerator_ << '/' << denominator_;
}

// Getters Fraction::
int Fraction::get_numerator() { return numerator_; }
int Fraction::get_denominator() { return denominator_; }

// Arithmetic operations: Fraction.sum(x)
Fraction Fraction::sum(const Fraction& right) {
    int num, den;
    den = denominator_ * right.denominator_;
    num = numerator_ * right.denominator_ + right.numerator_ * denominator_;
    //normalise(); // o q exatamente ele tá normalizando? NADA!
    return Fraction(num, den); // Constructor já garante normalizado!
}

Fraction Fraction::sub(const Fraction& right) {
    int num, den;
    den =  denominator_ * right.denominator_;
    num = numerator_ * right.denominator_ - right.numerator_ * denominator_;
    return Fraction(num, den);
}

Fraction Fraction::mul(const Fraction& right) {
    int num, den;
    num = numerator_ * right.numerator_;
    den = denominator_ * right.denominator_;
    return Fraction(num, den);
}

Fraction Fraction::div(const Fraction& right) {
    int num, den;
    num = numerator_ * right.denominator_;
    den = denominator_ * right.numerator_;
    return Fraction(num, den);
}


int main() {
    Fraction(2,-4).write(); std::cout << ' ';
    Fraction(1, 2).sum({2, 2}).write(); std::cout << ' ';
    Fraction(3, 2).sum({3, 4}).write(); std::cout << endl;
    // Fraction().sum({2, 4}).write(); std::cout << ' ';
    // Fraction(1,1).sum({2, 4}).write(); std::cout << ' ';
    // Fraction(2,4).sum({3, 9}).write(); std::cout << ' ';
    // Fraction(-2,4).sum({1, 2}).write(); std::cout << ' ';
    // Fraction(3,27).sum({-27, 81}).write(); std::cout << '\n';
    Fraction().sub({2, 4}).write(); std::cout << ' ';
    Fraction(1,1).sub({2, 4}).write(); std::cout << ' ';
    Fraction(2,4).sub({3, 9}).write(); std::cout << ' ';
    Fraction(-2,4).sub({1, 2}).write(); std::cout << ' ';
    Fraction(3,27).sub({-27, 81}).write(); std::cout << '\n';

    Fraction().mul({2, 4}).write(); std::cout << ' ';
    Fraction(1,1).mul({2, 4}).write(); std::cout << ' ';
    Fraction(2,4).mul({3, 9}).write(); std::cout << ' ';
    Fraction(-2,4).mul({1, 2}).write(); std::cout << ' ';
    Fraction(3,27).mul({-27, 81}).write(); std::cout << '\n';

    Fraction().div({2, 4}).write(); std::cout << ' ';
    Fraction(1,1).div({2, 4}).write(); std::cout << ' ';
    Fraction(2,4).div({3, 9}).write(); std::cout << ' ';
    Fraction(-2,4).div({1, 2}).write(); std::cout << ' ';
    Fraction(3,27).div({-27, 81}).write(); std::cout << '\n';

    return 0;
}