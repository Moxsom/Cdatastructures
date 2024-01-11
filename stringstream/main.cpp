#include <iostream>
#include <sstream>

using namespace std::string_literals; // for ""s operator

int main() {

    auto letter = "*"s;
    auto number1 = -1;
    auto number2 = -1;
    std::string line;

    std::cout << "Please type in a letter, space, Number, space, and Number" << std::endl;
    std::getline(std::cin, line);

    std::stringstream ss(line);

    //extract first string
    ss >> letter;

    if (letter.length() > 1) {
        //it must be text
        std::cout << "You entered some text." << std::endl;

    } else {
        //must be a command of 'I', 'L', 'E', 'D', or 'Q' commands
        std::cout << "I think you are a command." << std::endl;

        //try to extract a number
        ss >> number1;
        if (!ss.fail()) {
            std::cout << "You have a starting number!" << std::endl;

            // success! try to extract out a second number
            ss >> number2;
            if (ss.fail()) {
                // success! it must be a command!
                std::cout << "You have an ending number!" << std::endl;
                std::cout << "I'll assume you are a valid command." << std::endl;
            } else {
                //assume it's command dump the rest - Easy way.
                std::cout << "You didn't have an ending number." << std::endl;
                std::cout << "I'll still assume you are a valid command." << std::endl;
            }
        } else {
            // didn't get a number, but could be a command
            //if the entire input was only one character
            if (line.length() == 1) {
                std::cout << "I'll assume you are a command!" << std::endl;
            } else {
                std::cout << "You must be text instead" << std::endl;
            }
        }
    }

    ss >> letter >> number1 >> number2;

    std::cout << "letter: " << letter << std::endl;
    std::cout << "number1: " << number1 << std::endl;
    std::cout << "number2: " << number2 << std::endl;

    return 0;
}