//
// Created by Amanda on 16/06/2025.
//

#include <iostream>
#include <vector>
using namespace std;

template <typename T>
class Stack {
public:
    Stack(); // Constructor: builds an initially empty stack;
    size_t size() const;
    bool peek(T& elem) const;
    bool pop(T& elem);
    void push(const T& elem);
private:
    std::vector<T> elements; //store the elements in order of addition to the stack from most recent to least recent
};

template<typename T>
Stack<T>::Stack() { // builds an initially empty stack;
    elements = {};
}

template<typename T>
size_t Stack<T>::size() const {
    return elements.size();
}

template<typename T>
void Stack<T>::push(const T& elem) {
    // adds an element to the (top of the) stack;
    elements.push_back(elem);
}

template<typename T>
bool Stack<T>::pop(T& elem) {
    if (!elements.empty()) {
        elem = elements.back(); // (top elem) assigns that element to v
        // removes the element on top of the stack
        elements.pop_back(); // chamar sobre vector (elements)!
        return true;
    }
    // else: simply returns false if the stack is empty, leaving v unchanged
    return false;
}

template<typename T>
bool Stack<T>::peek(T& elem) const {
    if (!elements.empty()) { //if not empty
        // assigns v with the element on top
        elem = elements.back();
        return true;
    }
    // else:
    return false;
}

int main () {
    // Stack<int> s;
    // const Stack<int>& r = s;
    // int v = -1;
    // std::cout << r.size()  << ' ' << std::boolalpha
    //      << r.peek(v) << ' ' << v << ' '
    //      << s.pop(v)  << ' ' << v << ' '
    //      << s.size() << '\n';

    Stack<int> s;
    int v = -1;
    s.push(123);
    std::cout << s.size()  << ' ' << std::boolalpha
         << s.peek(v) << ' ' << v << ' '
         << s.pop(v)  << ' ' << v << ' '
         << s.size() << '\n';
    return 0;
}

