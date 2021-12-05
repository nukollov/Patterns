//
// Created by nikit on 05.12.2021.
//

#include "Repairer.h"
Repairer :: Repairer(std::string str, DiagnosticStand *st) : Decorator(st) {this->name = str;}
void Repairer ::doAction()
{
    std::cout << this->name << " + ";
    stand->doAction();
}