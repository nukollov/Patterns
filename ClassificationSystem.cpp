//
// Created by nikit on 06.12.2021.
//

#include "ClassificationSystem.h"
#include "Automobile.h"

ClassificationSystem* ClassificationSystem :: clSys = nullptr;

void ClassificationSystem ::setDiagnosticStand(DiagnosticStand *dS) {this->diaSt = dS;}

void ClassificationSystem ::createTransport() {this->transport = new Automobile();}

void ClassificationSystem ::setTransport(TransportCreator *tC) {this->transport = tC;}

void ClassificationSystem ::transportDoAction() {this->transport->doAction();}

ClassificationSystem ::ClassificationSystem(std::string c) {this->content = c;}

ClassificationSystem* ClassificationSystem ::getInstance(std::string c)
{
    if(clSys == nullptr)
        clSys = new ClassificationSystem(c);
    return clSys;
}

void ClassificationSystem::showContent() {std::cout << content << std::endl;}
