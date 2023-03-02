#include <iostream>

int main() {
    // type conversion = conversion a value of one data type to another
    //                   Implicit = automatic
    //                   Explicit = Precede value with new data type (int)

    // double x = (int) 3.14;
    char x = 100;
    
    // std::cout << (char) 100 << "\n";
    std::cout << x << "\n";

    int correct = 8;
    int questions = 10;
    double score = correct / (double) questions * 100;

    std::cout << score << "%" << "\n";

    return 0;
}