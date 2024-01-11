//
// Created by brent on 2024-01-08.
//

#ifndef CDATASTRUCTURES_ECHO_APPLICATION_H
#define CDATASTRUCTURES_ECHO_APPLICATION_H

#include <iostream>

class EchoApplication {
    static const std::string END_VALUE;
    std::istream& _cin;
    std::ostream& _cout;
    std::string _input;

public:
    explicit EchoApplication(std::istream &in, std::ostream &out);

    void input();

    void output();

    void run();
};


#endif //CDATASTRUCTURES_ECHO_APPLICATION_H
