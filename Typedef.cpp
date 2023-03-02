#include <iostream>
#include <vector>

// typedef std::vector<std::pair<std::string, int>> pairlist_t;
// typedef std::string text_t;
// typedef int number_t;

// typedef를 using으로 작성하는 방법 (+요즘엔 using이 더 인기있음)
using text_t = std::string;
using number_t = int;

int main() {
    // typedef = reserved keyword used to create an additional name
    //           (alias) for another data type.
    //           New identifier for an existing type
    //           Helps with readability and reduces typos
    //           Use when there is a clear benefit
    //           Replaced with 'using' (work better w/ templates)

    // pairlist_t pairlist;
    text_t firstName = "Yutak";
    number_t age = 21;

    std::cout << firstName << "\n";
    std::cout << age << "\n";

    return 0;
}