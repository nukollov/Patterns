//
// Created by nikit on 05.12.2021.
//

#ifndef LR3_DECORATOR_H
#define LR3_DECORATOR_H
#include "DiagnosticStand.h"


class Decorator : public DiagnosticStand{
protected:
    DiagnosticStand *stand;
public:
    void doAction() override;
    Decorator(DiagnosticStand *st);
};


#endif //LR3_DECORATOR_H
