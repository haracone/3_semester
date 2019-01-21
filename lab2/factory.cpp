//
// Created by A on 19.01.2019.
//

#include "Factory.h"
namespace {
DEFINE_Create DEFINE; PUSH_Create PUSH; POP_Create POP; ADD_Create ADD; MINUS_Create MINUS; MULTIPLY_Create MULTIPLY; DIVIDE_Create DIVIDE; SQRT_Create SQRT; PRINT_Create PRINT;
auto Factory::map = {{"DEFINE", &DEFINE}, {"PUSH", &PUSH}, {"POP", &POP}, {"ADD", &ADD}, {"MINUS", &MINUS}, {"MULTIPLY", &MULTIPLY}, {"DIVIDE", &DIVIDE}, {"SQRT", &SQRT}, {"PRINT", &PRINT}};
}
