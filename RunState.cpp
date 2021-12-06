//
// Created by nikit on 06.12.2021.
//

#include "RunState.h"
void RunState ::start_() {std::cout << "system started" << std::endl;}

void RunState ::stop_() {std::cout << "system stopped" << std::endl;}

RunState ::RunState(TrainingSystem* sys) : State(sys) {}