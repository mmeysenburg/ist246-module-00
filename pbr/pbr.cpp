#include <cstdlib>
#include <iostream>

void foo(int &a) {
    a = 13;
    std::cout << "in foo, a = " << a << std::endl;
}

int main() {
    int a = 17;
    std::cout << "in main, a = " << a << std::endl;
    foo(a);
    std::cout << "in main, a = " << a << std::endl;

    return EXIT_SUCCESS;
}
