//
// Created by nikit on 10.12.2021.
//

#include "Caretaker.h"
void Caretaker ::pushMemento() {this->history.push_back(clSys->save());}

void Caretaker ::popMemento() {
    clSys->restore(history.back());
    history.pop_back();
}

Caretaker ::Caretaker(ClassificationSystem* cs) {this->clSys = cs;}