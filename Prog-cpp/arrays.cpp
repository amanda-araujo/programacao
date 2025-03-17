//
// Created by Amanda on 17/03/2025.
//

#include <iostream>
#include <ostream>

struct data {
    int i;
    int j;
    int v;
};

struct dt {
    long a;
    int b[3];
    char c[12];
};

struct event {
    char id[4];
    int code;
};
struct week {
    int number;
    event events[7];
};

int f(const int a[], int b[]) {
    int c[] {0, 1, 2};
    // for (int v : a) c[0] += v; //error: ‘begin’ was not declared in this scope;
    // for (int& v : c) v = a[0];
    // for (int v : b) c[0] += v; //error: ‘begin’ was not declared in this scope;
    // for (int& v : c) v = b[0];
    // for (int& v : c) v = a[v] + b[v];
    // for (int i = 0 ; i < 3; i++) a[i] = c[i]; //error: assignment of read-only location ‘*(a + ...
    return c[0] + c[1] + c[2];
}

int main () {
    data d[3] { {0, 1, 2}, {3, 2, 1}, {0, 1, 2}};
    std::cout << d[2].j << d[d[0].v].i << d[d[1].j].v << std::endl;
    std::cout << d[0].i << std::endl;

    char s[] = "C/C++ is fun!";
    int i = 0;
    while (s[i] != '\0' and s[i] != ' ') { i++; }
    s[i] = '\0';
    std::cout << i << ' ' << s << std::endl;

    dt ddd[4];
    std::cout << sizeof(ddd) << std::endl;

    // Buffer pverflow
    int A[] = {1, 3, 2, 0};
    int index;
    std::cin >> index;
    A[A[index] + 1] = A[index];

    int bla[] = {2, 1, 0};
    int n = 0;
    for (int v : bla) { v++; n += v; }
    for (int& v : bla) { n++; v += n; }
    std::cout << n << bla[0] << bla[1] << bla[2] << std::endl;

    week w;
    std::cout << sizeof(w) << std::endl; //

    char st[] = "2LEIC 022";
    int l = 0;
    do { l++; } while (st[l] != '\0' and st[l] != '2');
    st[l] = '\0';
    std::cout << l << st << std::endl;
    return 0;
}
