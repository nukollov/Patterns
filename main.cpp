#include <iostream>
#include "RealStand.h"
#include "ProxyStand.h"
#include "DiagnosticStand.h"
#include "OutsideStand.h"
#include "Adapter.h"
#include "Repairer.h"
#include "CanUse.h"
#include "Component.h"
#include "Tool.h"
#include "ToolBox.h"
#include "ClassificationSystem.h"
#include "Motocycle.h"

int main() {
    ClassificationSystem* cS = new ClassificationSystem();
    cS->createTransport();
    cS->transportDoAction();
    TransportCreator* tC = new Motocycle();
    cS->setTransport(tC);
    cS->transportDoAction();
}
