//
// Created by nikit on 06.12.2021.
//

#include "ReadyState.h"
void ReadyState ::start_()
{
    std::cout << "system is ready" << std::endl;
    trSys->setState(new RunState(trSys));
    std::cout << "state changed for Run" << std::endl;
}

void ReadyState ::stop_() {std::cout << "system stopped" << std::endl;}

ReadyState ::ReadyState(TrainingSystem *sys) : State(sys){}