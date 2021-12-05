//
// Created by nikit on 05.12.2021.
//

#include "Decorator.h"
#include <iostream>

void Decorator :: doAction()
{
    this->stand->doAction();
}

Decorator ::Decorator(DiagnosticStand *st) {this->stand = st;}