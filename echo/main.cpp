#include <iostream>

int main() {

    std::string userKeepGoing;
    bool isRunning = true;

    while (isRunning == true) {
        std::cout << "Please enter the text you would like to see, If you would like to stop, enter 'end'" << std::endl;

        std::getline(std::cin, userKeepGoing);

        if (userKeepGoing != "end") {
            std::cout << "You Typed: " << userKeepGoing << std::endl;

        } else {
            std::cout << "Goodbye, User!" << std::endl;
            isRunning = false;
        }
    }

    return 0;
}
