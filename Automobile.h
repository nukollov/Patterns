//
// Created by nikit on 06.12.2021.
//

#ifndef LR3_AUTOMOBILE_H
#define LR3_AUTOMOBILE_H
#include "TransportCreator.h"

class Automobile : public TransportCreator{
public:
    Automobile();
    Automobile(std::string str);
    void doAction() override;
    Automobile* clone();
    Automobile(Automobile *a);
};


#endif //LR3_AUTOMOBILE_H
