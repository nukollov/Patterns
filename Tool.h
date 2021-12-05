//
// Created by nikit on 05.12.2021.
//

#ifndef LR3_TOOL_H
#define LR3_TOOL_H
#include "Component.h"
#include <iostream>

class Tool : public Component{
private:
    std::string name;
    void doAction() override;

public:
    Tool(std::string str);
};


#endif //LR3_TOOL_H
