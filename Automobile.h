//
// Created by nikit on 06.12.2021.
//

#ifndef LR3_AUTOMOBILE_H
#define LR3_AUTOMOBILE_H
#include "TransportCreator.h"

class Automobile : public TransportCreator{
public:
    void doAction() override;
};


#endif //LR3_AUTOMOBILE_H
