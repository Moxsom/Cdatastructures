#include <iostream>

int main(int argc, char* argv[] ) {

    double sum = 0;
    for (int i = 1; i < argc; i++) {
        sum += std::stod(argv[i]);
    }
    std::cout << sum << std::endl;

    return 0;
}