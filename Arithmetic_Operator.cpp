#include <iostream>

int main() {
    // arithmetic operators = return the result of a specific
    //                        arithmetic operation (+ - * /)

    int students = 20;

    // students = students + 1;
    // students += 1;
    // students++;

    // students = students -2;
    // students -= 2;
    // students--;

    // students = students * 2;
    // students *= 2;

    // students = students / 2;
    // students /= 2;

    int remainder = students % 2;
    
    std::cout << students << "\n";
    std::cout << remainder << "\n";

    // parenthesis
    // multiplication & division
    // addition & subtraction

    int student = 6 - 5 + 4 * 3 / 2;

    std::cout << student << "\n";

    return 0;
}