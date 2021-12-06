//
// Created by nikit on 06.12.2021.
//

#ifndef LR3_TRAININGSYSTEM_H
#define LR3_TRAININGSYSTEM_H
#include "Algorithm.h"
#include "State.h"
#include "InitState.h"

class TrainingSystem {
private:
    Algorithm* alg;
    State* state;
public:
    void start();
    void stop();
    void setState(State* st);
    TrainingSystem();
};


#endif //LR3_TRAININGSYSTEM_H
