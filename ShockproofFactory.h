//
// Created by nikit on 06.12.2021.
//

#ifndef LR3_SHOCKPROOFFACTORY_H
#define LR3_SHOCKPROOFFACTORY_H
#include "ToolFactory.h"
#include "ShockproofScrew.h"
#include "ShockproofHummer.h"

class ShockproofFactory : public ToolFactory{
public:
    Screw* createScrew() override;
    Hummer* createHummer() override;
};


#endif //LR3_SHOCKPROOFFACTORY_H
