#include <iostream>

void printNum();

int main() {
    // Local variables = declared inside a function or block {}
    // Global variables = declared outside of all functions

    int myNum = 1;
    printNum();
    std::cout << myNum << '\n';

    return 0;
}

void printNum() {
    int myNum = 4;
    std::cout << myNum << "\n";
}