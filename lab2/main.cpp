#include <iostream>
#include <fstream>
#include "Calculator.h"

int main(int argc, char** argv) {
    Calculator coolcalculator;
    if (argc > 1) {
        std::ifstream fin(argv[1]);
        coolcalculator.run(fin);
    } else {
        coolcalculator.run(std::cin);
    }
    return 0;
}
