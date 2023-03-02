#include <iostream>

namespace first {
    int x = 1;
}

namespace second {
    int x = 2;
}

int main() {
    // Namespace = provides a solution for preventing name conflicts
    //             in large projects. Each entity needs a unique name.
    //             A namespace allows for identically named entities
    //             as long as the namespaces are different.

    // using namespace first;
    // std::cout << x << "\n";

    int x = 0;

    std::cout << x << "\n";
    std::cout << first::x << "\n";
    std::cout << second::x << "\n";

    using namespace std;

    string name = "Yutak";

    cout << "Hello " << name << "\n";

    // using std::cout;
    // using std::string;

    return 0;
}