//
// Created by nikit on 06.12.2021.
//

#ifndef LR3_STATE_H
#define LR3_STATE_H
#include <iostream>
class TrainingSystem;

class State {
protected:
    TrainingSystem *trSys;
public:
    virtual void start_(){};
    virtual void stop_(){};
    State(TrainingSystem* sys);
};


#endif //LR3_STATE_H
