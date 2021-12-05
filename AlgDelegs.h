//
// Created by nikit on 28.10.2021.
//

#ifndef LR3_ALGDELEGS_H
#define LR3_ALGDELEGS_H
#include "Algorithm.h"

class Cause: public Algorithm{
    void doAction(){
        std::cout << "i'm Cause algorithm" << std::endl;
    }
};

class Unit: public Algorithm{
    void doAction(){
        std::cout << "i'm Unit algorithm" << std::endl;
    }
};


#endif //LR3_ALGDELEGS_H
