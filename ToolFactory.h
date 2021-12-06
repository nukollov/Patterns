//
// Created by nikit on 06.12.2021.
//

#ifndef LR3_TOOLFACTORY_H
#define LR3_TOOLFACTORY_H
#include "Screw.h"
#include "Hummer.h"


class ToolFactory {
public:
    virtual Screw* createScrew(){};
    virtual Hummer* createHummer(){};
};


#endif //LR3_TOOLFACTORY_H
