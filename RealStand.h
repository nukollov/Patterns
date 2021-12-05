//
// Created by nikit on 28.10.2021.
//

#ifndef LR3_REALSTAND_H
#define LR3_REALSTAND_H
#include "Algorithm.h"
#include "AlgDelegs.h"

class RealStand {
private:
    Algorithm *alg;
public:

    RealStand(Algorithm *al){
       this->alg = al;
    }

    RealStand(){
        alg = new Cause();
    }

    void doAction(){
        alg->doAction();
    }
};


#endif //LR3_REALSTAND_H
