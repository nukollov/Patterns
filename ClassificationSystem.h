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
    TransportCreator* transport;
    DiagnosticStand * diaSt;
public:
    void setDiagnosticStand(DiagnosticStand* dS);
    void createTransport();
    void setTransport(TransportCreator* tC);
    void transportDoAction();
};


#endif //LR3_CLASSIFICATIONSYSTEM_H
