//
// Created by nikit on 10.12.2021.
//

#ifndef LR3_CARETAKER_H
#define LR3_CARETAKER_H
#include "ClassificationSystem.h"
#include "vector"

class Caretaker {
private:
    ClassificationSystem* clSys;
    std::vector<Memento*> history;
public:
    void pushMemento();
    void popMemento();
    Caretaker(ClassificationSystem* cs);
};


#endif //LR3_CARETAKER_H
