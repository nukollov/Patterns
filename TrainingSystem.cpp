//
// Created by nikit on 06.12.2021.
//

#include "TrainingSystem.h"
void TrainingSystem ::start() {this->state->start_();}

void TrainingSystem ::stop() {this->state->stop_();}

void TrainingSystem ::setState(State *st) {this->state = st;}

TrainingSystem ::TrainingSystem() {this->state = new InitState(this);}