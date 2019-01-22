#ifndef UNTITLED_FACTORY_H
#define UNTITLED_FACTORY_H

#include <string>
#include "Commands.h"
#include "CMD_Ctreate.h"
#include <map>

class Factory {
    std::map <std::string, CMD_Ctreate*> map;
    Factory() = default;
public:
    Factory(const Factory &a) = delete;
    Commands *Fact(std::string str) {
        return map[str] -> create();
    }

    void SetMap (std::string str, CMD_Ctreate *com) {
        map[str] = com;
    }

    static Factory* getIns() {
        static Factory a;
        return &a;
    }
};




#endif //UNTITLED_FACTORY_H
