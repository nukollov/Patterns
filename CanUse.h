//
// Created by nikit on 05.12.2021.
//

#ifndef LR3_CANUSE_H
#define LR3_CANUSE_H
#include "Decorator.h"

class CanUse : public Decorator{
private: bool canUse;
public:
    void doAction() override;
    CanUse(bool canUse, DiagnosticStand *st);
};


#endif //LR3_CANUSE_H
