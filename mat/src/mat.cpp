#include <iostream>

#include "cgcustommath.hpp"

int main(int argc, char* argv[]) {
    if (argc < 3) {
        printf("Usage: mat <a> <b>\n");
        exit(1);
    }

    int a = std::stoi(argv[1]);
    int b = std::stoi(argv[2]);
    auto result  = matrix(a, b);
    
    std::cout << result << std::endl;

    return EXIT_SUCCESS;
}
