//
// Created by nikit on 06.12.2021.
//

#ifndef LR3_SHOCKPROOFSCREW_H
#define LR3_SHOCKPROOFSCREW_H
#include "Screw.h"

class ShockproofScrew : public Screw{
public:
    void unscrew() override;
};


#endif //LR3_SHOCKPROOFSCREW_H
