//
// Created by Amanda on 14/06/2025.
//

#include "Color.h"
/*// Class declaration
class Color {
public:
    // Constructors
    Color(unsigned char red, unsigned char green, unsigned char blue);
    Color(const Color& c); // copy constructor

    // Accessors (getter methods): const >> NÃO vai alterar objeto!
    unsigned char red() const;
    unsigned char green() const;
    unsigned char blue() const;

    // Static class constants
    static const Color RED, GREEN, BLUE, BLACK, WHITE;

    // Member functions: equality, invert
    bool equal_to(const Color& other) const;
    void invert();

private:
    unsigned char red_;
    unsigned char green_;
    unsigned char blue_;
};*/

// Constructors
Color::Color(unsigned char red, unsigned char green, unsigned char blue) :
red_(red), green_(green), blue_(blue) {}

Color::Color(const Color& c) : red_(c.red_), green_(c.green_), blue_(c.blue_) {}

// Accessors (getter methods)
unsigned char Color::red() const { return red_; }
unsigned char Color::green() const { return green_; }
unsigned char Color::blue() const { return blue_; }

// Static class constants
const Color Color::RED = Color(255, 0, 0);
const Color Color::GREEN = Color(0, 255, 0);
const Color Color::BLUE = Color(0, 0, 255);
const Color Color::BLACK = Color(0, 0, 0);
const Color Color::WHITE = Color(255, 255, 255);

bool Color::equal_to(const Color& other) const {
    // a.equal_to(b) for Color objects a and b returns true
    // if and only if the RGB components of a and b are equal
    if (red_ == other.red_ && green_ == other.green_ && blue_ == other.blue_) {
        return true;
    } else {
        return false;
    }
}

void Color::invert() {
    red_ = 255 - red();
    green_ = 255 - green();
    blue_ = 255 - blue();
}