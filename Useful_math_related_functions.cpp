#include <iostream>
#include <cmath>

int main() {
    double x = 3.14;
    double y = 4;
    double z;

    // z = std::max(x, y);
    // z = std::min(x, y);
    // z = pow(2, 3);
    // z = sqrt(9);
    // z = abs(-3);
    // z = round(x);
    // z = ceil(x);
    z = floor(x);

    std::cout << z << "\n";

    double a;
    double b;
    double c;

    std::cout << "Enter side A: ";
    std::cin >> a;

    std::cout << "Enter side B: ";
    std::cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));

    std::cout << "side C: " << c << "\n";

    return 0;
}