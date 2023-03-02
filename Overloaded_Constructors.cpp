#include <iostream>

class Pizza {
    public:
        std::string topping1;
        std::string topping2;
    
    Pizza(std::string topping1) {
        this -> topping1 = topping1;
    }

    Pizza(std::string topping1, std::string topping2) {
        this -> topping1 = topping1;
        this -> topping2 = topping2;
    }
};

int main() {
    // overload constructors = multiple constructors w/ same name but different parameters
    //                         allows for varying arguments when instantiating an object

    Pizza pizza1("pepperoni");
    Pizza pizza2("mushrooms", "peppers");

    std::cout << pizza1.topping1 << '\n';

    std::cout << pizza2.topping1 << '\n';
    std::cout << pizza2.topping2 << '\n';

    return 0;
}