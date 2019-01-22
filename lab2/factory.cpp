//
// Created by A on 19.01.2019.
//

#include "Factory.h"
namespace {
bool func() {

    CMD_Ctreate* DEFINE = new DEFINE_Create;
    CMD_Ctreate* PUSH = new DEFINE_Create;
    CMD_Ctreate* POP = new DEFINE_Create;
    CMD_Ctreate* ADD = new DEFINE_Create;
    CMD_Ctreate* MINUS = new DEFINE_Create;
    CMD_Ctreate* MULTIPLY = new DEFINE_Create;
    CMD_Ctreate* DIVIDE = new DEFINE_Create;
    CMD_Ctreate* SQRT = new DEFINE_Create;
    CMD_Ctreate* PRINT = new DEFINE_Create;
    Factory::getIns() ->SetMap("DEFINE", DEFINE);
    Factory::getIns() ->SetMap("PUSH", PUSH);
    Factory::getIns() ->SetMap("POP", POP);
    Factory::getIns() ->SetMap("+", ADD);
    Factory::getIns() ->SetMap("-", MINUS);
    Factory::getIns() ->SetMap("*", MULTIPLY);
    Factory::getIns() ->SetMap("/", DIVIDE);
    Factory::getIns() ->SetMap("SQRT", SQRT);
    Factory::getIns() ->SetMap("PRINT", PRINT);
    return true;
}

    bool a = func();
}

