//
// Created by nikit on 06.12.2021.
//

#include "ShockproofFactory.h"
Screw* ShockproofFactory ::createScrew() {return new ShockproofScrew();}
Hummer* ShockproofFactory ::createHummer() {return new ShockproofHummer();}