//
// Created by nikit on 05.12.2021.
//

#ifndef LR3_TOOLBOX_H
#define LR3_TOOLBOX_H
#include "Component.h"
#include "vector"
#include <iostream>

class ToolBox : public Component{
private:
    std::vector<Component*> content;
public:
    void doAction() override;
    void addObj(Component *c) override;
    void removeObj() override;
};


#endif //LR3_TOOLBOX_H
