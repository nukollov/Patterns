//
// Created by nikit on 06.12.2021.
//

#ifndef LR3_READYSTATE_H
#define LR3_READYSTATE_H
#include "State.h"
#include "RunState.h"
#include "TrainingSystem.h"

class ReadyState : public State{
public:
    void start_() override;
    void stop_() override;
    void setTrainSys(State* st);
    ReadyState(TrainingSystem *sys);
};


#endif //LR3_READYSTATE_H
