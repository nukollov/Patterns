//
// Created by nikit on 06.12.2021.
//

#ifndef LR3_RUNSTATE_H
#define LR3_RUNSTATE_H
#include "State.h"

class RunState : public State{
public:
    void start_() override;
    void stop_() override;
    RunState(TrainingSystem *sys);
};


#endif //LR3_RUNSTATE_H
