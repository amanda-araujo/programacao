//
// Created by Amanda on 16/06/2025.
//

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <list>
using namespace std;

/*takes two iterators start and end associated with the same container
 *and yields a string representation of the form "[ elem_1 elem_2 ...
 *elem_n ]" of all elements of the container between start and end,
 *including start but excluding end;*/
// *itr acessa elemento apontado pelo iterador
template <typename Itr>
string to_string(Itr start, Itr end) {
    ostringstream ss;
    ss << "[ ";
    // loop with iterators associated w same container
    for (auto itr = start; itr != end; itr++) {
        ss << *itr << " ";
    }
    ss << "]";
    return ss.str();;
}

/*traverses all elements between start and end, including start but
 *excluding end, replacing values of a by values of b, and returns the
 *number of elements that were replaced.*/
template <typename Itr, typename T>
int replace_it(Itr start, Itr end, const T& a, const T& b) {
    int count = 0;
    for (auto itr = start; itr != end; itr++) {
        if (*itr == a) {
            // replace a por b
            *itr = b;
            count++;
        }
    }
    return count;
}


int main () {
    // vector<int> v { 1, 2, 3, 3, 4 };
    // std::cout << to_string(v.cbegin(), v.cend()) << '\n';

    // vector<int> v;
    // std::cout << replace_it(v.begin(), v.end(), 0, 1) << ' '
    //           << to_string(v.cbegin(), v.cend()) << '\n';

    vector<int> v { 1, 2, 3, 3, 4 };
    std::cout << replace_it(v.begin(), v.end(), 3, 0) << ' '
              << to_string(v.cbegin(), v.cend()) << '\n';

    list<string> l { "C++", "Java", "C++", "Python", "Rust", "C" } ;
    std::cout << replace_it(l.begin(), l.end(), string("C++"), string("Rust")) << ' '
              << replace_it(l.begin(), l.end(), string("C"), string("Rust")) << ' '
              << to_string(l.cbegin(), l.cend()) << '\n';

    string s = "Hello world";
    std::cout << replace_it(s.begin(), s.end(), 'l', 'L') << ' '
              << to_string(s.cbegin(), s.cend()) << ' '
              << replace_it(s.rbegin(), s.rend(), 'o', 'O') << ' '
              << to_string(s.crbegin(), s.crend()) <<  ' '
              << to_string(s.cbegin(), s.cend()) << '\n';
    return 0;
}