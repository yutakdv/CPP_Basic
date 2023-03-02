#include <iostream>

int main() {
    // ternary operator ?: = replacement to an if/else statement | 삼항 연산자
    // condition ? expression1 : expression2;

    // int grade = 75;
    // grade >= 60 ? std::cout << "You pass!\n" : std::cout << "You fail\n";

    // int number = 9;
    // number % 2 == 1 ? std::cout << "ODD\n" : std::cout << "EVEN\n";

    bool hungry = true;
    // hungry ? std::cout << "You are hungry\n" : std::cout << "You are full\n";
    std::cout << (hungry ? "You are hungry\n" : "You are full\n");

    return 0;
}