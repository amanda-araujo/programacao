//
// Created by Amanda on 17/06/2025.
//

#include <iostream>
#include <string>
#include<map>
using namespace std;

/* replaces all characters in s according to the character replacement
dictated by r, i.e., a character c in s should be replaced by r[c] if c
is a key in r*/
// map<first, second>
void replace(const map<char, char>& r, string& s) {

    for (auto& c : s) { // each char in the string
          auto it = r.find(c); // itr to pair (key, value)
          if (it != r.end()) {
            // replace
            c = it->second; //r[c];
          }
    }
}

int main() {
    //string s = "C / C++ @ LEIC";
    // replace({ {'C', 'z'}, {'+', '-'}, {'L', 'X'}}, s);
    // std::cout << s << '\n';

    // replace({ }, s);
    // std::cout << s << '\n';

    string s = "A B C D E F";
    replace({ {' ', '_'}}, s);
    std::cout << s << '\n';
  return 0;
}