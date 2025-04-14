//
// Created by Amanda on 13/04/2025.
//
#include <iostream>
#include <vector>
using namespace std;

string longest_prefix(const vector<string>& v) {
    // Intput: given a vector v of strings,
    // Output: returns the longest common prefix to all of the strings.
    if (v.empty()) return ""; // Checks if vector not empty
    string prefix = v[0];        // Initialization

    for (size_t i = 1; i < v.size(); i++) {
        size_t j = 0;
        while (j < prefix.size() and j < v[i].size() and prefix[j] == v[i][j]) {
            j++;
        }

        prefix = v[i].substr(0, j);
        if (prefix.empty()) return "";
    }

    return prefix;
}

int main () {
    std::cout << "\"" << longest_prefix({ "apple", "apply", "ape", "april"}) << "\"\n";
    return 0;
}


/* for (const string& s : v) {
        for (char c : s) {}
    }
    for each not the best option to compare
*/