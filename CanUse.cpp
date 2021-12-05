//
// Created by nikit on 05.12.2021.
//

#include "CanUse.h"
#include <iostream>
void CanUse::doAction()
{
    std::string str = "";
    if(this->canUse == true)
        str = "can";
    else
        str = "cant";
    str.append(" use");
    std::cout << str << " + ";
    stand->doAction();
}

CanUse ::CanUse(bool canUse, DiagnosticStand *st) : Decorator(st) {this->canUse = canUse;}