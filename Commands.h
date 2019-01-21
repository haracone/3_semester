#ifndef UNTITLED_COMMANDS_H
#define UNTITLED_COMMANDS_H

#include <iostream>
#include <string>
#include <map>

class Commands {
public:
    virtual void run();
};

class DEFINE : public Commands {

};

class POP : public Commands {

};

class PUSH : public Commands {

};

class SQRT : public Commands {

};

class ADD : public Commands {

};

class MINUS : public Commands {

};

class MULTIPLY : public Commands {

};

class DIVIDE : public Commands {

};

class PRINT : public Commands {

};



#endif //UNTITLED_COMMANDS_H
