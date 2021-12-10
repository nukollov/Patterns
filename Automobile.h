//
// Created by nikit on 06.12.2021.
//

#ifndef LR3_AUTOMOBILE_H
#define LR3_AUTOMOBILE_H
#include "TransportCreator.h"
#include "Subcriber.h"

class Automobile : public TransportCreator, public Subcriber{
public:
    Automobile();
    Automobile(std::string str);
    void doAction() override;
    Automobile* clone();
    Automobile(Automobile *a);
    void update() override;
};


#endif //LR3_AUTOMOBILE_H
