#ifndef UNTITLED_FACTORY_H
#define UNTITLED_FACTORY_H

#include <string>
#include "Commands.h"
#include "CMD_Ctreate.h"
#include <map>

class Factory {
    static std::map <std::string, CMD_Ctreate*> map;
public:
    Commands *Fact(std::string str) {
        return map[str] -> create();
    }
};



#endif //UNTITLED_FACTORY_H
