//
// Created by nikit on 05.12.2021.
//

#ifndef LR3_ADAPTER_H
#define LR3_ADAPTER_H
#include "DiagnosticStand.h"
#include "OutsideStand.h"

class Adapter : public DiagnosticStand{
private:
    OutsideStand *stand;
public:
    virtual void doAction();
    Adapter(OutsideStand *st);
};


#endif //LR3_ADAPTER_H
