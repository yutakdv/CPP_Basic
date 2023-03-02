#include <iostream>

int main() {
    // if statements = do something if a condition is true.
    //                 if not, then don't do it.

    int age;

    std::cout << "Enter your age: " << '\n';
    std::cin >> age;

    if (age >= 100) {
        std::cout << "You are too old to enter this site!" << "\n";
    } else if (age >= 18) {
        std::cout << "Welcome to the site!" << '\n';
    } else if (age < 0) {
        std::cout << "You haven't been born yet!" << "\n";
    } else {
        std::cout << "You are not old enough to enter!" << "\n";
    }

    return 0;
}