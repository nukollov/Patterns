//
// Created by nikit on 05.12.2021.
//

#include "ToolBox.h"
void ToolBox ::doAction()
{
    std::cout << "im tool box, my content:" << std::endl;
    for(int i = 0; i < content.size(); i++)
        content[i]->doAction();
}

void ToolBox ::addObj(Component *c) {content.push_back(c);}

void ToolBox ::removeObj() {content.pop_back();}