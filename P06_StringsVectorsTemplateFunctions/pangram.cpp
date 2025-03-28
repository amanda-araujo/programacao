//
// Created by up202411286 on 28-03-2025.
//
#include <iostream>
#include <vector>
#include <string>
using namespace std;


bool pangram(const string& s, string& m) {

    vector<char> alpha[26]; // dynamic array >>>> Methods //= {'a', 'b'}; // initialization! // alpha[0] = 'd'; NEIN: nada lá dentro
    for (int i = 0; i < 26; i++) alpha[0].push_back(static_cast<char>(i + 97)); // ascii table: a 97 - 122;
    // Print
    //for (auto c : alpha) cout << c;
    cout << alpha[0] << endl;

    // vector<char> alphabet = {'a', 'b', 'c', 'd'};
    // cout << (char) 97 << endl; // OK
    //
    // vector<char> alpha[26];
    // alpha[0] = {'z'};
    // cout << alpha[0] << endl;
    // for (int i = 0; i < 26; i++) alpha[i] = static_cast<char>(i + 97);

    // DONT KNOW WHATS HAPPENING

    return true;
}

int main () {
    string s = "abc";
    string m = "";
    bool r = pangram(s, m);
    std::cout << '\"' << s << "\" "
              << boolalpha << r << " \"" << m << "\"\n";
    return 0;
}

// bool pangram(const string& s, string& m) {
//
//
//     // vector<char> alpha[26];
//     // ascii table: a 97 - 122; char are integral types
//     // for (int i = 0; i < 26; i++) alpha[i] = '0' + i + 97;
//
//     // vector<char> : dynamic array >>>> Métodos
//     vector<char> alpha[26]; // = {'a', 'b'}; // Inicializaçao!
//     // alpha[0] = 'd'; NEIN: nada lá dentro
//     for (int i = 0; i < 26; i++) alpha[0].push_back((char) (i + 97));
//
//     //for (int i = 0; i < 26; i++) cout << alpha[i]; // NEIN
//     for (auto c : alpha) cout << c;
//
//     vector<char> alphabet = {'a', 'b', 'c', 'd'};
//     cout << (char) 97 << endl;
//
//     vector<char> alpha[26];
//     alpha[0] = {'z'};
//     cout << alpha[0] << endl;
//     for (int i = 0; i < 26; i++) alpha[i] = static_cast<char>(i + 97);
//     // for (int i = 0; s[i] != '\0'; i++) {
//     //     std::tolower(s[i]);
//     //
//     // }
//
//     // Return all letters missing
//     // for (int i = 0; i > 26; i++) {
//     //     if (alpha[i] >= 97 and alpha[i] <= 122) { // char
//     //         // m.append(alpha[i])
//     //     }
//     //}
//
//     //if (m == "") return true;
//
//     return true;
// }