//
// Created by brent on 2024-01-08.
//
#include <iostream>
#include "echo_application.h"

const std::string EchoApplication::END_VALUE = "end";

EchoApplication::EchoApplication(std::istream &in, std::ostream &out) : _cin(in), _cout(out) {}


void EchoApplication::input() {
    _cout << "Please enter the text you would like to see, If you would like to stop, enter 'end'" << std::endl;
    std::getline(_cin, _input);
}

void EchoApplication::output() {
    if (_input == END_VALUE) {
        _cout << "Goodbye!" << std::endl;
        return;
    }
    _cout << "you typed: " << _input << std::endl;
}

void EchoApplication::run() {
    do {
        input();
        output();
    } while (_input != END_VALUE);
}
