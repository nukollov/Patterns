//
// Created by nikit on 06.12.2021.
//

#include "InitState.h"
void InitState ::start_()
{
    std::cout << "system are initialized" << std::endl;
    trSys->setState(new ReadyState(trSys));
    std::cout << "state changed for Ready" << std::endl;
}

void InitState ::stop_() {std::cout << "system initialization is stopped" << std::endl;}

InitState ::InitState(TrainingSystem *sys) : State(sys) {}
