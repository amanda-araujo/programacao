//
// Created by up202411286 on 28-03-2025.
//
#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool pangram(const string& s, string& m) {
    // pangram = every letter of the alphabet
    // upper = lower
    // if pangram >> true
    // in m: all letters missing in s, alphabetically ordered >> .push_back()

    // Letters keep track of the letters
    char letters[26];
    for (int i = 0; i < 26; i++) letters[i] = 'a' + i;

    // Screens the string mapping letters
    for (char c : s) {
        for (char & letter : letters) {
            if (tolower(c) == letter) {
                letter = ' ';
                break;
            }
        }
    }

    // Add not used letters to m
    for (char letter : letters) {
        if (letter != ' ') m.push_back(letter);
    }

    // Check Pangram
    if (m.empty()) return true;
    return false;
}

int main () {
    // string s = "abc";
    // string m = "";
    // bool r = pangram(s, m);
    // std::cout << '\"' << s << "\" "
    //           << boolalpha << r << " \"" << m << "\"\n";
    //string s = "The quick brown fox jumps over the lazy dog";
    string s = " abC dEf GhI jKl MnO pQr StU vWx yZ ";
    string m = "";
    bool r = pangram(s, m);
    std::cout << '\"' << s << "\" "
              << boolalpha << r << " \"" << m << "\"\n";
    return 0;
}

