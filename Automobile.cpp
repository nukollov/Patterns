//
// Created by nikit on 06.12.2021.
//

#include "Automobile.h"
void Automobile ::doAction()
{
    std::cout << "im automobile" << std::endl;
}

Automobile* Automobile :: clone()
{
    return new Automobile(this);
}

Automobile :: Automobile(Automobile *a) {this->mark = a->mark;}

Automobile::Automobile() {}

Automobile :: Automobile(std::string str) {this->mark = str;}

void Automobile ::update() {std::cout << "automobile got notification" << std::endl;}