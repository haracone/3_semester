#include <iostream>
#include <fstream>
#include "module1.h"

int main(int argc, char** argv) {
    std::ifstream ifs (*(argv + 1), std::ifstream::in);
    std::ofstream ofs (*(argv + 2), std::ofstream::out);
    Module1 a;
    a.insertT(ifs);
    a.PrintMM(ofs);

    return 0;
}
