//
// Created by up202411286 on 16-05-2025.
//
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Use the following VECTOR to map each individual roman symbol to its decimal value:
/* Note: a pair<F,S> object is a template struct to represent pairs: it has fields
 * first of type F and second of type S (std::pair). */
vector<pair<char, unsigned> > roman_to_int = {
    {'I', 1},
    {'V', 5},
    {'X', 10},
    {'L', 50},
    {'C', 100},
    {'D', 500},
    {'M', 1000}
};
// roman symbol: ++, but IV = 4 (not 1 + 5)
// READ FROM RIGHT TO LEFT

unsigned value (char c) {
    // Find the char value of roman[i] in the vector of pair<>
    for (auto i : roman_to_int) {
        if (i.first == c) return i.second;
    }
    return 0;
}

unsigned roman_to_arab(const string& roman) {
    unsigned arab = 0;
    unsigned v_ant = 0;
    // char c;
    unsigned vc;

    // Read: right to left
    for (int i = roman.size(); i >= 0; i--) {
        vc = value(roman[i]);
        // Rule: if reads a smaller char: --
        if (vc < v_ant) arab -= vc;
        else arab += vc;

        v_ant = vc; // update ant
    }

    return arab;
}

int main () {
    string r = "MMMDCCCLXXXVIII"; std::cout << roman_to_arab(r) << '\n';
    return 0;
}
