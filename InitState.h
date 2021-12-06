//
// Created by nikit on 06.12.2021.
//

#ifndef LR3_INITSTATE_H
#define LR3_INITSTATE_H
#include "State.h"
#include "ReadyState.h"
#include "TrainingSystem.h"

class InitState : public State{
public:
    void start_() override;
    void stop_() override;
    InitState(TrainingSystem *sys);
};


#endif //LR3_INITSTATE_H
