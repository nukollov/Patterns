//
// Created by nikit on 05.12.2021.
//

#ifndef LR3_REPAIRER_H
#define LR3_REPAIRER_H
#include "Decorator.h"
#include <iostream>


class Repairer : public Decorator{
private:
    std::string name;
public:
    void doAction() override;
    Repairer(std::string str, DiagnosticStand *st);
};


#endif //LR3_REPAIRER_H
