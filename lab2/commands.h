#ifndef UNTITLED_COMMANDS_H
#define UNTITLED_COMMANDS_H

#include <iostream>
#include <string>
#include <map>
#include "Contects.h"

class Commands {
public:
    virtual void run(Contects *con, std::string str);
};

class DEFINE : public Commands {
public:
    void run(Contects *con, std::string str) override;
};

class POP : public Commands {
public:
    void run(Contects *con, std::string str) override;
};

class PUSH : public Commands {
public:
    void run(Contects *con, std::string str) override;
};

class SQRT : public Commands {
public:
    void run(Contects *con, std::string str) override;
};

class ADD : public Commands {
public:
    void run(Contects *con, std::string str) override;
};

class MINUS : public Commands {
public:
    void run(Contects *con, std::string str) override;
};

class MULTIPLY : public Commands {
public:
    void run(Contects *con, std::string str) override;
};

class DIVIDE : public Commands {
public:
    void run(Contects *con, std::string str) override;
};

class PRINT : public Commands {
public:
    void run(Contects *con, std::string str) override;
};



#endif //UNTITLED_COMMANDS_H
