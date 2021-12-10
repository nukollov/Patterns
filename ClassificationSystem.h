//
// Created by nikit on 06.12.2021.
//

#ifndef LR3_CLASSIFICATIONSYSTEM_H
#define LR3_CLASSIFICATIONSYSTEM_H
#include <iostream>
#include "TransportCreator.h"
#include "DiagnosticStand.h"

class Memento {
private:
    std::string str;
public:
    Memento(std::string str);
    std::string getState();
};

class ClassificationSystem {
private:
    static ClassificationSystem* clSys;
    std::string content;
    TransportCreator* transport;
    DiagnosticStand * diaSt;
public:
    void setDiagnosticStand(DiagnosticStand* dS);
    void createTransport();
    void setTransport(TransportCreator* tC);
    void transportDoAction();
    static ClassificationSystem* getInstance(std::string c);
    void showContent();
    Memento* save();
    void restore(Memento* mem);
    ClassificationSystem(std::string c);
    void setContent(std::string c);
    std::string getContent();
};


#endif //LR3_CLASSIFICATIONSYSTEM_H
