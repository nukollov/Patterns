//
// Created by nikit on 05.12.2021.
//

#include "Tool.h"
void Tool :: doAction() {std::cout << "im " + name << std::endl;}

Tool::Tool(std::string str) {this->name = str;}