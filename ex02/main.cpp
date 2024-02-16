#include <iostream>
#include <string>
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**) {
    Array<std::string> numbers(4);

    numbers[3] = "lol";

    try {
        numbers[4];
    } catch(std::exception &e) {
        std::cout << e.what() << std::endl;
    };
    std::cout << numbers << std::endl;
}