#include <iostream>

int searchArray(int array[], int size, int element);
int searchArray(std::string array[], int size, std::string element);

int main() {
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(numbers) / sizeof(int);
    int index;  
    int myNum;

    std::cout << "Enter element to search for: ";
    std::cin >> myNum;

    index = searchArray(numbers, size, myNum);

    if (index != -1) {
        std::cout << myNum << " is at index " << index << '\n';
    } else {
        std::cout << myNum << " is not in the array\n";
    }

    // ************** Another Example ************** //

    std::string foods[] = {"pizza", "hamburger", "hotdog"};
    int size_2 = sizeof(foods) / sizeof(std::string);
    int index_2;
    std::string myFood;

    std::cout << "Enter element to search for: ";
    std::getline(std::cin >> std::ws, myFood);

    index_2 = searchArray(foods, size, myFood);

    if (index != -1) {
        std::cout << myFood << " is at index " << index_2 << '\n';
    } else {
        std::cout << myFood << " is not in the array\n";
    }

    return 0;
}

int searchArray(int array[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (array[i] == element) return i;
    }

    return -1;
}

int searchArray(std::string array[], int size, std::string element) {
    for (int i = 0; i < size; i++) {
        if (array[i] == element) return i;
    }

    return -1;
}