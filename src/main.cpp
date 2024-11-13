#include <iostream>

extern void print();
extern void declaration_example();

int main() {
    std::cout << "Hello World?" << std::endl;
    // print();
    declaration_example();
    return 0;
}
