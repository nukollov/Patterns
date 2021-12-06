//
// Created by nikit on 06.12.2021.
//

#include "ClassificationSystem.h"
#include "Automobile.h"

void ClassificationSystem ::setDiagnosticStand(DiagnosticStand *dS) {this->diaSt = dS;}

void ClassificationSystem ::createTransport() {this->transport = new Automobile();}

void ClassificationSystem ::setTransport(TransportCreator *tC) {this->transport = tC;}

void ClassificationSystem ::transportDoAction() {this->transport->doAction();}