#include <iostream>

int main() {
    // foreach loop = loop that eases the traversal over an
    //                iterable data set

    std::string students[] = {"Spongebob", "Patrick", "Squidward", "Sandy"};

    for (int i = 0; i < sizeof(students) / sizeof(std::string); i++) {
        std::cout << students[i] << '\n';
    }

    for (std::string student : students) {
        std::cout << student << '\n';
    }

    int grades[] = {65, 72, 81, 93};

    for (int grades : grades) {
        std::cout << grades << '\n';
    }

    return 0;
}