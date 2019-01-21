#ifndef UNTITLED_CMD_CTREATE_H
#define UNTITLED_CMD_CTREATE_H


#include "Commands.h"

class CMD_Ctreate {
public:
    virtual Commands *create();
};

class DEFINE_Create : public CMD_Ctreate{
public:
     Commands *create() {
         return new DEFINE;
    }
};

class POP_Create : public CMD_Ctreate{
public:
    Commands *create() {
        return new POP;
    }
};

class PUSH_Create : public CMD_Ctreate{
public:
    Commands *create() {
        return new PUSH;
    }
};

class SQRT_Create : public CMD_Ctreate{
public:
    Commands *create() {
        return new SQRT;
    }
};

class ADD_Create : public CMD_Ctreate{
public:
    Commands *create() {
        return new ADD;
    }
};

class MINUS_Create : public CMD_Ctreate{
public:
    Commands *create() {
        return new MINUS;
    }
};

class MULTIPLY_Create : public CMD_Ctreate{
public:
    Commands *create() {
        return new MULTIPLY;
    }
};

class DIVIDE_Create : public CMD_Ctreate{
public:
    Commands *create() {
        return new DIVIDE;
    }
};

class PRINT_Create : public CMD_Ctreate{
public:
    Commands *create() {
        return new PRINT;
    }
};


#endif //UNTITLED_CMD_CTREATE_H
