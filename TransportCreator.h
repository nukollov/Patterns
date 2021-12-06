//
// Created by nikit on 06.12.2021.
//

#ifndef LR3_TRANSPORTCREATOR_H
#define LR3_TRANSPORTCREATOR_H
#include <iostream>

class TransportCreator {
protected:
    std::string mark;
    std::string model;
    std::string onwer;
    std::string deffect;
public:
    virtual void doAction() {};
    std::string getMark();
};


#endif //LR3_TRANSPORTCREATOR_H
