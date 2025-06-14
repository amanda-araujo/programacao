//
// Created by Amanda on 14/06/2025.
//

#ifndef COLOR_H
#define COLOR_H

// Class declaration
class Color {
public:
    // Constructors
    Color(unsigned char red, unsigned char green, unsigned char blue); // default
    Color(const Color& c); // constructor

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
};

#endif //COLOR_H
