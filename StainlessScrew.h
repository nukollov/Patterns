//
// Created by nikit on 06.12.2021.
//

#ifndef LR3_STAINLESSSCREW_H
#define LR3_STAINLESSSCREW_H
#include "Screw.h"

class StainlessScrew : public Screw{
public:
    void unscrew() override;
};


#endif //LR3_STAINLESSSCREW_H
