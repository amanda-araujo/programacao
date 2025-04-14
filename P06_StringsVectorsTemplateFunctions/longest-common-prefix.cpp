//
// Created by Amanda on 13/04/2025.
//
#include <iostream>
#include <vector>
using namespace std;

string longest_prefix(const vector<string>& v) {
    // Intput: given a vector v of strings,
    // Output: returns the longest common prefix to all of the strings.
    string prefix = v[0];

    for (size_t i = 0; i < v.size(); i++) {
        // For each word
        // Compare each char with prefix
        for (size_t j = 0; j < v[i].size(); j++) {
            if (prefix[j] != v[i][j]) {
                if (j == 0) return "";
                // update prefix: until j - 1 =
                prefix = v[i].substr(0, j);
                break;
            }
        }
    }
    return prefix;
}

int main () {
    std::cout << "\"" << longest_prefix({ "apple", "apply", "ape", "april", "xx" }) << "\"\n";
    return 0;
}


/* for (const string& s : v) {
        for (char c : s) {}
    }
    for each not the best option to compare
*/