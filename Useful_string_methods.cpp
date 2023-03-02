#include <iostream>

int main() {
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    // if (name.length() > 12) {
    //     std::cout << "Your name can't be over 12 characters!\n";
    // } else {
    //     std::cout << "Welcome " << name << "\n";
    // }

    // if (name.empty()) {
    //     std::cout << "You didn't enter your name\n";
    // } else {
    //     std::cout << "Hello " << name << "\n";
    // }

    // name.clear();
    // std::cout << "Hello " << name << "\n";

    // name.append("@gamil.com");
    // std::cout << "Your username is now " << name << '\n';

    // std::cout << name.at(0) << '\n';

    // name.insert(0, "@");
    // std::cout << name << "\n";

    // std::cout << name.find(' ');

    // name.erase(0, 3);
    // std::cout << name << "\n";


    return 0;
}