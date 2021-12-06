//
// Created by nikit on 06.12.2021.
//

#include "StainlessFactory.h"
Screw* StainlessFactory ::createScrew() {return new StainlessScrew();}
Hummer* StainlessFactory ::createHummer() {return new StainlessHummer();}