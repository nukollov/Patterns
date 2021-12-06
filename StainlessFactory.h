//
// Created by nikit on 06.12.2021.
//

#ifndef LR3_STAINLESSFACTORY_H
#define LR3_STAINLESSFACTORY_H
#include "ToolFactory.h"
#include "StainlessHummer.h"
#include "StainlessScrew.h"

class StainlessFactory : public ToolFactory{
public:
    Screw* createScrew() override;
    Hummer* createHummer() override;
};


#endif //LR3_STAINLESSFACTORY_H
