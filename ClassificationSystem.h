//
// Created by nikit on 06.12.2021.
//

#ifndef LR3_CLASSIFICATIONSYSTEM_H
#define LR3_CLASSIFICATIONSYSTEM_H
#include <iostream>
#include "TransportCreator.h"
#include "DiagnosticStand.h"

class ClassificationSystem {
private:
    static ClassificationSystem* clSys;
    std::string content;
    TransportCreator* transport;
    DiagnosticStand * diaSt;
    ClassificationSystem(std::string c);
public:
    void setDiagnosticStand(DiagnosticStand* dS);
    void createTransport();
    void setTransport(TransportCreator* tC);
    void transportDoAction();
    static ClassificationSystem* getInstance(std::string c);
    void showContent();
};


#endif //LR3_CLASSIFICATIONSYSTEM_H
