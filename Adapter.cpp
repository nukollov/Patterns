//
// Created by nikit on 05.12.2021.
//

#include <iostream>
#include "Adapter.h"
void Adapter :: doAction()
{
    stand->getResult();
    std::cout << "Adapter: im fixing OutsideStand" << std::endl << "Adapter: hi its OutsideStand" << std::endl;
}

Adapter::Adapter(OutsideStand *st)
{
    this->stand = st;
}