//
// Created by up202411286 on 28-03-2025.
//
#include <iostream>
#include <string>
#include <vector>
#include "print_string.h"
using namespace std;

/* Write a C++ function void split(const string& s, vector<string>& v) that places in vector v
 * all strings that occur in s separated by one or more spaces.
 * The class string member functions find and substr may be useful.
 * find(char, starting_index): searches for char from starting_index
 */

void split(const string& s, vector<std::string>& v) {

    long unsigned int i = 0;
    int initial;
    int ind_final;
    string sub;

    while (i < s.length()) {

        // Searches for the first char != ' ': beginning of word
        int flag = 0; // no char
        for (long unsigned int j = i; j < s.length(); j++) {
            if (s[j] != ' ') {
                initial = j;
                flag = 1;
                break;
            }
        }
        // cout << "initial: " << initial << endl;
        // cout << flag << endl;
        if (flag == 0) break;
        // cout << "initial: " << initial << endl;

        // Searches for the first ' '; end of word
        ind_final = s.find(' ', initial); // searches for ' ' in s starting from position initial
        if (ind_final == -1) ind_final = (int)s.length(); //break;
        // cout << "final: " << ind_final << endl;

        // Catches the word from its beginning to the end
        sub = s.substr(initial, ind_final - initial);
        // cout << "sub:" << i << " - " << ind_final << endl;
        // cout << "sub len:" << ind_final - i << endl;

        // Insert strings in vector
        v.push_back(sub);

        i = ind_final + 1;
    }
}

int main () {
    string s = "C++ LEIC FCUP FEUP";
    //string s = "  a b  c ";
    //string s = "    ";
    vector<string> v;
    split(s, v);
    print(v);
    return 0;
}
